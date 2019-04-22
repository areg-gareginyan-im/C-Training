#ifndef NODE_INCLUDED
#define NODE_INCLUDED

typedef struct {
  int data;
  struct node *left;
  struct node *right;
} node;

/**
 * Creates a new node for binary tree
 */
node* newNode(int data);

#endif
