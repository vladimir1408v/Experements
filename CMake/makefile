THIS_FILE := $(lastword $(MAKEFILE_LIST))
.PHONY: build

build:
	docker build --pull --rm -f "dockerfile" -t debian:cmake "."
	docker run --rm -it -v $(shell pwd):/app/ debian:cmake
