UNAME := $(shell uname)
ifeq ($(UNAME),Linux)
	SHELL := /bin/bash
else ifeq ($(UNAME),Darwin)
	SHELL := /usr/local/bin/bash
endif

.PHONY: all clean install test

all: generate

clean:
	rm -fr build

generate: clean
	python3 scripts/make_vk.py

install: test
	cmake --install build --prefix build/install2

tag:
	source scripts/auto-tagging.sh

test: generate
	cmake -B build -S . -DMAKE_VK_BUILD_TESTS=ON $(ARGV)
	cmake --build build --config Release --target test1
	build/tests/test1
	ctest -V