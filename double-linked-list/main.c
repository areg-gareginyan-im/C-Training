#include <stdio.h>
#include "./list/list.h"

int main() {
  node *head = newNode(15);
  printf("head data: %i\n", head->data);
  initialize(&head, 100);
  print(&head);
  printf("Press Enter to exit...");
  getchar();
  return 0;
}
