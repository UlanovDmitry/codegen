PHONY: build clean

P=codegen
SRC= main.c
CFLAGS = -g -Wall -O3
CC=c99

build:
	$(CC) $(CFLAGS) -o $(P) $(SRC) 

run: build
	./$(P)

clean:
	rm $(P) 
