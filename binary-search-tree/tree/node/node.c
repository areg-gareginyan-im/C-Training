#include "node.h"
#include <stdlib.h>
#include <stdio.h>

node* newNode(int data) {
  node *elem = (node*) malloc(sizeof(node));
  elem->data = data;
  elem->left = NULL;
  elem->right = NULL;

  return elem;
}