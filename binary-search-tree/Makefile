CC=gcc
MAIN=main.c
DEPS=./tree/tree.c ./tree/node/node.c
FLAGS=-Wall -pedantic -ansi
OBJECT=main

binary-tree-make: main.c ./tree/tree.c
	$(CC) $(FLAGS) $(MAIN) $(DEPS) -o $(OBJECT)

.PHONY: clean

clean:
	rm $(OBJECT)
