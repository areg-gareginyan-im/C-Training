#include <stdlib.h>
#include <stdio.h>
#include "./list/list.h"

int main() {
  node head = newLinkedList();
  head->data = 10.45;
  
  printf("HEAD DATA: %f\n", head->data);
  
  add(head, 24.54);

  printf("SECOND DATA: %f\n", head->next->data);

  return 0;
}
