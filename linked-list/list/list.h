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

/**
 * Runs reverse N algorithm on the given list with
 */
node reverseN(node list, int n);

/**
 * Initializes the list
 */
node initialize(node list, unsigned int n);

/**
 * Sorts the given list using Merge Sort algorithm
 */
node mergeSort(node list);

/**
 * Sorts the given list
 */
void sort(node *list);

/**
 * Gets the middle node of the given list
 */
node getMiddle(node list);

/**
 * Merges the given lists and returns the merged list
 */
node mergeLists(node leftStart, node rightStart);

/**
 * Gets the current microtime
 */
long getMicrotime();

#endif
