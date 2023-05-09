package main

import (
	"log"
	"net/http"

	"github.com/JavierRenero/TFG_MS_ROS/MS_ROS_V0.1/api"
	"github.com/gorilla/mux"
)

/* func handleIndex(w http.ResponseWriter, r *http.Request) {

	json.NewEncoder(w).Encode("{\"message\": \"Hello World\"}")
} */

func main() {

	r := mux.NewRouter()

	// create the API object
	a := &api.API{}

	// register the routes
	a.RegisterRoutes(r)

	srv := &http.Server{
		Addr:    ":8080",
		Handler: r,
	}

	log.Println("Server running on port 8080")
	srv.ListenAndServe()

}
