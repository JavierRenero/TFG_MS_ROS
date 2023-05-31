package api

import (
	"net/http"

	"github.com/gorilla/mux"
)

func (a *API) RegisterRoutes(r *mux.Router) {

	a.allPages = append(a.allPages, "/battery")
	a.allPages = append(a.allPages, "/")
	a.allPages = append(a.allPages, "/odom")
	a.allPages = append(a.allPages, "/discover")
	//a.allPages = append(a.allPages, "/books")
	//register the routes
	/* 	r.HandleFunc("/books", a.getBooks).Methods(http.MethodGet)
	   	r.HandleFunc("/books/{id}", a.getBook).Methods(http.MethodGet)
	   	r.HandleFunc("/books", a.postBook).Methods(http.MethodPost) */
	r.HandleFunc(a.allPages[0], a.getBattery).Methods(http.MethodGet)
	r.HandleFunc(a.allPages[1], a.handleIndex).Methods(http.MethodGet)
	r.HandleFunc(a.allPages[2], a.getOdom).Methods(http.MethodGet)
	r.HandleFunc(a.allPages[3], a.getDiscover).Methods(http.MethodGet)

}
