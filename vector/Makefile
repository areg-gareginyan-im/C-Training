CC=gcc
MAIN=main.c
DEPS=./vector/vector.c
FLAGS=-Wall -pedantic -ansi
OBJECT=main

vector-make: main.c ./vector/vector.c
	$(CC) $(FLAGS) $(MAIN) $(DEPS) -o $(OBJECT)

.PHONY: clean

clean:
	rm $(OBJECT)
