CC=gcc
CFLAG=-Wall -ansi

Main: main.c DoubleLinkedList
	$(CC) $(CFLAG) main.c list.o -o main

DoubleLinkedList:
	$(CC) $(CFLAG) -c ./list/list.c -o list.o

.PHONY: clean

clean:
	rm *.o main
