#ifndef TREE_INCLUDED
#define TREE_INCLUDED
#include "./node/node.h"
#include <stdbool.h>

/**
 * Sets root element
 */
node * put(node *elem, int value);

/**
 * Returns true if the specified value exits and false otherwise 
 */
bool find(node *elem, int val);

void print(node *root, int space);

#endif
