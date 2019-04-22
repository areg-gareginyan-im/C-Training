#ifndef TREE_INCLUDED
#define TREE_INCLUDED
#include "./node/node.h"
#include <stdbool.h>

/**
 * Sets root element
 */
struct node * put(struct node *elem, int value);

/**
 * Returns true if the specified value exits and false otherwise 
 */
bool find(struct node *elem, int val);

void print(struct node *root, int space);

#endif
