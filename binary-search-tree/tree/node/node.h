#ifndef NODE_INCLUDED
#define NODE_INCLUDED

struct node {
  int data;
  struct node *left;
  struct node *right;
};

/**
 * Creates a new node for binary tree
 */
struct node* newNode(int data);

#endif
