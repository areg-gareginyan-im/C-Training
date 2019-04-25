#include <stdlib.h>
#include <stdio.h>
#include "./list/list.h"

int main() {
  node head = newLinkedList();
  head->data = 40;
  add(head, 2);
  add(head, 23);
  add(head, 14);
  add(head, 5);
  add(head, 6);

  printf("HEAD DATA: %f\n", head->data);
  printf("SECOND DATA: %f\n", head->next->data);

  print(head);
  head = shuffleN(head, 4);
  print(head);
  /**sort(head); */
  /**print(head); */
  return 0;
}
