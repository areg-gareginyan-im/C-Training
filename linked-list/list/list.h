#ifndef LIST_INCLUDED
#define LIST_INCLUDED

struct LinkedList {
  double data;
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
node add(node list, double value);

/**
 * Appends the specified value in the element which has the specified index
 */
node addAt(node head, size_t index, double value);

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

#endif
