PHONY: all, clean

P=codegen
SRC= main.c
CFLAGS = -g -Wall -O3
CC=c99

all:
	$(CC) $(CFLAGS) -o $(P) $(SRC) 

clean:
	rm $(P) 
