FROM golang:1.20.5 AS dev

WORKDIR /app
# pre-copy/cache go.mod for pre-downloading dependencies and only redownloading them in subsequent builds if they change
COPY go.mod go.sum main.go ./
RUN go mod download && go mod verify

# copy the rest of the source code and build
COPY api ./api

# build the binary
RUN go mod tidy