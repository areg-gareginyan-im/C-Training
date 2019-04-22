#include "node.h"
#include <stdlib.h>

struct node* newNode(int data) {
  struct node *elem = (struct node*) malloc(sizeof(struct node));

  elem->data = data;
  elem->left = NULL;
  elem->right = NULL;

  return elem;
}