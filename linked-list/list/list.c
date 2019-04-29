#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include "list.h"

node newLinkedList() {
  node head = (node) malloc(sizeof(struct LinkedList));
  head->next = NULL;
  return head;
}

node newNode(int value) {
  node elem = (node) malloc(sizeof(node));
  elem->next = NULL;
  elem->data = value;
  return elem;
}

void push(node* head_ref, int val) {
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

node add(node head, int value) {
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

node addAt(node head, size_t index, int value) {
  /**!TODO Implement function */
  return head;
}

void print(node head) {
  node list = head;
  for(list = head; NULL != list; list = list->next) {
    printf("%p:%d%s", list, list->data, NULL != list->next ? " -> " : "\n\n");
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
    int k = 1;
    size_t i = 1;
    node elem;
    node *lists = (node*) malloc(sizeof(struct LinkedList));
    node *tempLists = (node*) malloc(sizeof(struct LinkedList));
    for(elem = list; NULL != elem; elem = elem->next) {
      if(k && i <= n) {
        (*(tempLists + i)) = newNode(elem->data);
        (*(lists + i)) = (*(tempLists + i));
        if(n == i) {
          k = 0;
        }
        ++i;
        continue;
      }
      if(i > n) {
        i = 1;
      }
      (*(tempLists + i))->next = newNode(elem->data);
      (*(tempLists + i)) = (*(tempLists + i))->next;
      ++i;
    }
    (*(lists + 1))->data = list->data;
    for(i = 1; i < n; ++i) {
      (*(tempLists + i))->next = *(lists + i + 1);
    }
    return *(lists + 1);
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

node reverseN(node list, int n) {
  node first = NULL, newList = NULL;
  node elem, prevLast = NULL, last = NULL;
  int i, k = 1;
  if(n <= 1) {
    return list;
  }
  for(i = 1; NULL != list; list = list->next, ++i) {
    elem = newNode(list->data);
    if(1 == i) {
      prevLast = last;
      last = elem;
    } else if(n == i) {
      if(k) {
        first = elem;
        first->next = newList;
        k = 0;
      } else {
        prevLast->next = elem;
        elem->next = newList;
      }
      i = 0;
    } else {
      elem->next = newList;
    }
    newList = elem;
    if(NULL == list->next && prevLast != NULL) {
        prevLast->next = newList;
    }
  }
  return (NULL == first) ? newList : first;
}

long getMicrotime(){
	struct timeval currentTime;
	gettimeofday(&currentTime, NULL);
	return currentTime.tv_sec * (int)1e6 + currentTime.tv_usec;
}