#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
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

void push(node* head_ref, double val) {
  node new_node = (node) malloc(sizeof(node));
  new_node->data  = val;
  new_node->next = *(head_ref);
  (*head_ref) = new_node;
}

node initialize(node list, int n) {
  size_t i;
  for (i = n; i > 0; i--) {
    push(&list, i);
  }
  return list;
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
    printf("%d%s", (int) list->data, NULL != list->next ? "->" : "\n\n");
    list = list->next;
  }
}
/*
node shuffleN(node list, int n) {
  size_t i, j;
  node elem;
  if(n <= 1) {
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
*/
node shuffleN(node list, int n) {
    node elem;
    node *lists = newLinkedList();
    /** FIXME: 'tempLists' should be change while iteration but 'lists' should be pointed on the first items */
    node *tempLists = lists;
    size_t i = 1;
    for(elem = list->next; NULL != elem; elem = elem->next) {
      if(i <= n) {
         (*(lists + i)) = newNode(elem->data);
         ++i;
         continue;
      }
      int j = i%n == 0 ? n : i%n;
      (*(tempLists + j))->next = newNode(elem->data);
      (*(tempLists + j)) = (*(tempLists + j))->next;
      ++i;
    }

    (*(lists + 0)) = newNode(list->data);
    (*(lists + 0))->next = (*(lists + 1));

    for(i = 1; i < n; ++i) {
      *(tempLists + i) = *(lists + i + 1);
    }
    return (*lists);
}

node reverse(node list) {
  node newList = NULL;
  node elem;

  for(;NULL != list; list = list->next) {
    elem = newNode(list->data);
    elem->next = newList;
    newList = elem;
  }
  return newList;
}

long getMicrotime(){
	struct timeval currentTime;
	gettimeofday(&currentTime, NULL);
	return currentTime.tv_sec * (int)1e6 + currentTime.tv_usec;
}