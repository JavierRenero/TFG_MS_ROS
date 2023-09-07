package api

import (
	"encoding/json"
	"fmt"
	"io/ioutil"
	"net/http"
	"strings"
)

type API struct {
	allPages []string
}

type robotId struct {
	IdRob string `json:"id"`
}

func (a *API) handleIndex(w http.ResponseWriter, r *http.Request) {
	json.NewEncoder(w).Encode("Message ERROR: You need to specify a valid endpoint")
	w.WriteHeader(http.StatusBadRequest)
}

func (a *API) getDiscover(w http.ResponseWriter, r *http.Request) {

	response := struct {
		AvailableEndpoints []string `json:"AvailableEndpoints"`
	}{
		AvailableEndpoints: a.allPages,
	}

	// Set the response content type to JSON
	w.Header().Set("Content-Type", "application/json")
	// Encode the response struct as JSON and write it to the response writer
	err := json.NewEncoder(w).Encode(response)
	if err != nil {
		http.Error(w, err.Error(), http.StatusInternalServerError)
		return
	}

}

func (a *API) getBattery(w http.ResponseWriter, r *http.Request) {
	params := &robotId{}

	err := json.NewDecoder(r.Body).Decode(params)
	if err != nil {
		w.WriteHeader(http.StatusBadRequest)
		return
	}
	if params.IdRob == "" {
		http.Error(w, "No idRobot, So publiser will not be found", http.StatusBadRequest)
		return

	}
	// Set up the HTTP request to send to the ROS 2 micro-service
	url := "http://127.0.0.1:5000/battery"
	// Create the complete URL with the query parameter
	if params.IdRob == "" {
		http.Error(w, "No IdRobot, So publiser Will Not Be Found", http.StatusNotFound)
	} else {

		urlWithParams := fmt.Sprintf("%s?idRob=%s", url, params.IdRob)

		req, err := http.Get(urlWithParams)
		if err != nil {
			http.Error(w, err.Error(), http.StatusInternalServerError)
			return
		}
		defer req.Body.Close()
		body, err := ioutil.ReadAll(req.Body)
		if err != nil {
			http.Error(w, err.Error(), http.StatusInternalServerError)
			return
		}
		// Define a struct to extract the battery level from the JSON response
		type BatteryResponse struct {
			Level string `json:"battery_level"`
		}

		// Unmarshal the JSON response into the struct
		var batteryResp BatteryResponse
		err = json.Unmarshal(body, &batteryResp)
		if err != nil {
			http.Error(w, err.Error(), http.StatusInternalServerError)
			return
		}

		if strings.Compare(batteryResp.Level, "No data") == 0 {
			http.Error(w, "No data, So publiser Not Available", http.StatusNotFound)
			return
		}

		response := struct {
			ID           string `json:"id"`
			BatteryLevel string `json:"battery_level"`
		}{
			ID:           params.IdRob,
			BatteryLevel: batteryResp.Level,
		}

		// Set the response content type to JSON
		w.Header().Set("Content-Type", "application/json")
		// Encode the response struct as JSON and write it to the response writer
		err = json.NewEncoder(w).Encode(response)
		if err != nil {
			http.Error(w, err.Error(), http.StatusInternalServerError)
			return
		}
	}
}

func (a *API) getOdom(w http.ResponseWriter, r *http.Request) {
	params := &robotId{}

	err := json.NewDecoder(r.Body).Decode(params)
	if err != nil {
		w.WriteHeader(http.StatusBadRequest)
		return
	}
	if params.IdRob == "" {
		http.Error(w, "No idRobot, So publiser will not be found", http.StatusBadRequest)
		return

	}
	// Set up the HTTP request to send to the ROS 2 micro-service
	url := "http://127.0.0.1:5001/odom"
	// Create the complete URL with the query parameter
	if params.IdRob == "" {
		http.Error(w, "No IdRobot, So publiser Will Not Be Found", http.StatusNotFound)
	} else {
		urlWithParams := fmt.Sprintf("%s?idRob=%s", url, params.IdRob)

		req, err := http.Get(urlWithParams)
		if err != nil {
			http.Error(w, err.Error(), http.StatusInternalServerError)
			return
		}
		defer req.Body.Close()
		// Define a struct to extract the battery level from the JSON response
		type Linear struct {
			X float64 `json:"x"`
			Y float64 `json:"y"`
			Z float64 `json:"z"`
		}

		type Angular struct {
			X float64 `json:"x"`
			Y float64 `json:"y"`
			Z float64 `json:"z"`
		}

		type Position struct {
			X float64 `json:"x"`
			Y float64 `json:"y"`
			Z float64 `json:"z"`
		}

		type Orientation struct {
			X float64 `json:"x"`
			Y float64 `json:"y"`
			Z float64 `json:"z"`
			W float64 `json:"w"`
		}

		type OdomResponse struct {
			ChildFrameID string      `json:"Child_frame_id"`
			Linear       Linear      `json:"Linear"`
			Angular      Angular     `json:"Angular"`
			Position     Position    `json:"Position"`
			Orientation  Orientation `json:"Orientation"`
		}
		// Unmarshal the JSON response into the struct
		var odomResp OdomResponse
		err = json.NewDecoder(req.Body).Decode(&odomResp)
		if err != nil {
			http.Error(w, err.Error(), http.StatusInternalServerError)
			return
		}
		// error handling if the robot is not available
		if strings.Compare(odomResp.ChildFrameID, "No data") == 0 {
			http.Error(w, "No data, So publiser Not Available", http.StatusNotFound)
			return
		}

		// print(odomResp.Position.X)
		// print(odomResp.Position.Y)
		// print(odomResp.Position.Z)

		response := struct {
			ID           string      `json:"id"`
			ChildFrameID string      `json:"Child_frame_id"`
			Linear       Linear      `json:"Linear"`
			Angular      Angular     `json:"Angular"`
			Position     Position    `json:"Position"`
			Orientation  Orientation `json:"Orientation"`
		}{
			ID:           params.IdRob,
			ChildFrameID: odomResp.ChildFrameID,
			Linear: Linear{
				X: odomResp.Linear.X,
				Y: odomResp.Linear.Y,
				Z: odomResp.Linear.Z,
			},
			Angular: Angular{
				X: odomResp.Angular.X,
				Y: odomResp.Angular.Y,
				Z: odomResp.Angular.Z,
			},
			Position: Position{
				X: odomResp.Position.X,
				Y: odomResp.Position.Y,
				Z: odomResp.Position.Z,
			},
			Orientation: Orientation{
				X: odomResp.Orientation.X,
				Y: odomResp.Orientation.Y,
				Z: odomResp.Orientation.Z,
				W: odomResp.Orientation.W,
			},
		}

		// Set the response content type to JSON
		w.Header().Set("Content-Type", "application/json")
		// Encode the response struct as JSON and write it to the response writer
		err = json.NewEncoder(w).Encode(response)
		if err != nil {
			http.Error(w, err.Error(), http.StatusInternalServerError)
			return
		}
	}
}
