#include "./node/node.h"
#include "tree.h"
#include <stdio.h>
#include <stdbool.h>

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

bool find(struct node *elem, int val) {
  if(NULL == elem) return false;
  if(elem->data < val) return find(elem->right, val);
  if(elem->data > val) return find(elem->left, val);
  /** if equals */
  return true;
}

void print(struct node *root, int space) { 
  int i;
  if (root == NULL) 
      return; 
  space += 10; 
  print(root->right, space); 
  printf("\n"); 
  for (i = 10; i < space; i++) 
      printf(" "); 
  printf("%d\n", root->data); 
  print(root->left, space); 
} 