#ifndef LIST_INCLUDED
#define LIST_INCLUDED

struct LinkedList {
  int data;
  struct LinkedList *next;
};

typedef struct LinkedList *node;

/**
 * Creates a linked list and specify the first value
 */
node newLinkedList();

/**
 * Appends the specified value to the end of the list
 */
node add(node list, int value);

/**
 * Appends the specified value in the element which has the specified index
 */
node addAt(node head, size_t index, int value);

/**
 * Prints the linked list 
 */
void print(node head);

/**
 * Shuffles the linked list
 */
node shuffleN(node list, int n);

/**
 * Reverses the linked list
 */
node reverse(node list);

node initialize(node list, int n);

long getMicrotime();

#endif
