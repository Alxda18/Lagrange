CXX = g++
all: main

bin/main: src/main.cpp include/*
	$(CXX) $< -o $@ -I include

run: bin/main
	./$<