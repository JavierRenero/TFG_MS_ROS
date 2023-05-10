package api

import (
	"encoding/json"
	"fmt"
	"io/ioutil"
	"net/http"
	"strconv"
	"strings"

	"github.com/gorilla/mux"
	"github.com/gorilla/schema"
)

type API struct{}

type postBook struct {
	Title string `json:"title"`
}

type BookParams struct {
	Offset int `schema:"offset"`
	Limit  int `schema:"limit"`
}

var (
	books   = []string{"book1", "book2", "book3", "book4", "book5"}
	decoder = schema.NewDecoder()
)

func (a *API) getBooks(m http.ResponseWriter, r *http.Request) {

	params := &BookParams{}

	err := decoder.Decode(params, r.URL.Query())

	/* 	limitParam := r.URL.Query().Get("limit")

	   	limit, err := strconv.Atoi(limitParam)*/
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
}

func (a *API) handleIndex(w http.ResponseWriter, r *http.Request) {

	json.NewEncoder(w).Encode("Message ERROR: You need to specify a valid endpoint")
	w.WriteHeader(http.StatusBadRequest)
}

func (a *API) getBattery(w http.ResponseWriter, r *http.Request) {
	vars := mux.Vars(r)
	id := vars["id"]

	// Set up the HTTP request to send to the ROS 2 micro-service
	url := "http://localhost:5000/battery"
	payload := strings.NewReader(fmt.Sprintf(`{"id": "%s"}`, id))

	req, err := http.NewRequest("POST", url, payload)
	if err != nil {
		http.Error(w, err.Error(), http.StatusInternalServerError)
		return
	}
	req.Header.Set("Content-Type", "application/json")

	// Send the HTTP request and get the response
	res, err := http.DefaultClient.Do(req)
	if err != nil {
		http.Error(w, err.Error(), http.StatusInternalServerError)
		return
	}
	defer res.Body.Close()

	// Read the response body and send it back to the client
	body, err := ioutil.ReadAll(res.Body)
	if err != nil {
		http.Error(w, err.Error(), http.StatusInternalServerError)
		return
	}
	json.NewEncoder(w).Encode(fmt.Sprintf(`"id": "%s","battery": "%s"`, id, body))
	//fmt.Fprintf(w, string(body))
}
