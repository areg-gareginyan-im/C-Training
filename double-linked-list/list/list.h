#ifndef INCLUDED_LIST
#define INCLUDED_LIST

typedef struct {
  int data;
  struct node *prev;
  struct node *next;
} node;

node* newNode(int data);

void initialize(node **head, size_t n);

void print(node **head);

node* reverse(node *head);

node* shuffle(node *head);

#endif
