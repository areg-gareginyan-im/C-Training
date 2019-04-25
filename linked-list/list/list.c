#include <stdlib.h>
#include <stdio.h>
#include "list.h"

node newLinkedList() {
  node head = (node) malloc(sizeof(struct LinkedList));
  head->next = NULL;
  return head;
}

node newNode(double value) {
  node elem = (node) malloc(sizeof(node));
  elem->next = NULL;
  elem->data = value;
  return elem;
}

node add(node head, double value) {
  node elem = newNode(value);
  if(NULL == head) {
    head = elem;
  } else {
    node temp = head;
    while(NULL != temp->next) {
      temp = temp->next;
    }
    temp->next = elem;
  }
  return elem;
}

node addAt(node head, size_t index, double value) {
  /**!TODO Implement function */
  return head;
}

void print(node head) {
  node list = head;
  while(NULL != list) {
    printf("%f%s", list->data, NULL != list->next ? "->" : "\n");
    list = list->next;
  }
}

node shuffleN(node list, int n) {
  size_t i, j;
  node elem;
  if(n < 1) {
    return list;
  }
  node newList = newNode(list->data);
  node head = newList;
  for(i = 1; i <= n; ++i) {
    j = 1;
    for(elem = list; NULL != elem; elem = elem->next) {
      if((i == j && 1 != i) || (j > n && j%n == i) || (i == n && j%n == 0)) {
        head->next = newNode(elem->data);
        head = head->next;
      }
      ++j;
    }
  }
  return newList;
}