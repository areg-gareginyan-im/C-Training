#include <stdlib.h>
#include <time.h>
#include "list.h"

node* newNode(int data) {
node* elem = (node*) malloc(sizeof(node*));
  if(NULL == elem) {
    free(elem);
    return NULL;
  }
  elem->data = data;
  elem->prev = NULL;
  elem->next = NULL;
  return elem;
}

void push() {

}

void initialize(node **head, size_t n) {
  node *list = *head;
  srand(time(NULL));
  while(n--) {
    list->data = rand() % 1000;
    list = list->next;
  }
}

void print(node **head) {
  while(*head != NULL) {
    printf("%d%s\n", (*head)->data, (*head)->next == NULL ? "\n" : " -> ");
    (*head) = (*head)->next;
  }
}

node* reverse(node *head) {
  return head;
}

node* shuffle(node *head) {
  return head;
}
