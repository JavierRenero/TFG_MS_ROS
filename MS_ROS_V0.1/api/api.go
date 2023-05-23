package api

import (
	"encoding/json"
	"fmt"
	"io/ioutil"
	"net/http"
	"strings"
)

type API struct{}

/* type postBook struct {
	Title string `json:"title"`
} */

type robotId struct {
	IdRob string `json:"id"`
}

/* type BookParams struct {
	Offset int `schema:"offset"`
	Limit  int `schema:"limit"`
} */

/*var (
	books   = []string{"book1", "book2", "book3", "book4", "book5"}
	decoder = schema.NewDecoder()
)*/

/* func (a *API) getBooks(m http.ResponseWriter, r *http.Request) {

	params := &BookParams{}

	err := decoder.Decode(params, r.URL.Query())

	if err != nil {
		m.WriteHeader(http.StatusBadRequest)
		return
	}

	if params.Offset < 0 || params.Offset > len(books) {
		m.WriteHeader(http.StatusBadRequest)
		return
	}

	if params.Limit < 0 || params.Limit > len(books) {
		m.WriteHeader(http.StatusBadRequest)
		return
	}

	var from, to int

	if params.Offset > 0 {
		from = params.Offset
	}

	if params.Limit > 0 {
		to = params.Limit
	} else {
		to = len(books)
	}

	json.NewEncoder(m).Encode(books[from:to])
}

func (a *API) getBook(m http.ResponseWriter, r *http.Request) {
	pathParams := mux.Vars(r)

	idParam := pathParams["id"]

	id, err := strconv.Atoi(idParam)
	if err != nil {
		m.WriteHeader(http.StatusBadRequest)
		return
	}
	index := id - 1
	if index < 0 || index > len(books)-1 {
		m.WriteHeader(http.StatusNotFound)
		return
	}

	json.NewEncoder(m).Encode(books[index])
}

func (a *API) postBook(m http.ResponseWriter, r *http.Request) {
	book := &postBook{}

	err := json.NewDecoder(r.Body).Decode(book)
	if err != nil {
		m.WriteHeader(http.StatusBadRequest)
		return
	}

	books = append(books, book.Title)

	m.WriteHeader(http.StatusCreated)
} */

func (a *API) handleIndex(w http.ResponseWriter, r *http.Request) {

	json.NewEncoder(w).Encode("Message ERROR: You need to specify a valid endpoint")
	w.WriteHeader(http.StatusBadRequest)
}

func (a *API) getBattery(w http.ResponseWriter, r *http.Request) {
	params := &robotId{}

	err := json.NewDecoder(r.Body).Decode(params)
	if err != nil {
		w.WriteHeader(http.StatusBadRequest)
		return
	}

	// Set up the HTTP request to send to the ROS 2 micro-service
	url := "http://127.0.0.1:5000/battery"
	// Create the complete URL with the query parameter
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
		http.Error(w, err.Error()+"GOPI", http.StatusInternalServerError)
		return
	}

	if strings.Compare(batteryResp.Level, "No data") == 0 {
		http.Error(w, "No data", http.StatusNotFound)
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
	json.NewEncoder(w).Encode(response)
}
