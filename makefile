CC = g++
CFLAGS = -Wall -I./include

all: main

main: src/main.cpp src/Menu.cpp src/Interpolacion.cpp
    $(CC) $(CFLAGS) $^ -o $@

clean:
    rm -f main