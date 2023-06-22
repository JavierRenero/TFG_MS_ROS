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

	r.HandleFunc(a.allPages[0], a.getBattery).Methods(http.MethodGet)
	r.HandleFunc(a.allPages[1], a.handleIndex).Methods(http.MethodGet)
	r.HandleFunc(a.allPages[2], a.getOdom).Methods(http.MethodGet)
	r.HandleFunc(a.allPages[3], a.getDiscover).Methods(http.MethodGet)

}
