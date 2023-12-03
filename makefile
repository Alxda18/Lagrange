bin/main : src/main.cpp include/*
	g++ src/main.cpp -o bin/main -I include

run : bin/main

	./bin/main