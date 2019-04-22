#include "./node/node.h"
#include "tree.h"
#include <stdio.h>

struct node * put(struct node *elem, int value) {
  /** if no element */
  if(NULL == elem) {
    elem = newNode(value);
    return elem;
  }
  if(value < elem->data) {
    elem->left = put(elem->left, value);
  } else if(value > elem->data) {
    elem->right = put(elem->right, value);
  }
  return elem;
}
