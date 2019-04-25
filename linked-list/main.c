#include <stdlib.h>
#include <stdio.h>
#include "./list/list.h"

int main() {
  node head = newLinkedList();
  long startTime = getMicrotime();
    printf("Start to push data into Linked List...\n");
  head = initialize(head, 10);
  printf("\nInitialization time of 1M nodes in microseconds: %lu\n", getMicrotime() - startTime);
  startTime = getMicrotime();
  print(head);
  head = shuffleN(head, 2);
  print(head);
  printf("\nShuffling takes %lu microseconds for 1M nodes and n = %d\n", getMicrotime() - startTime, 20);
  /*print(head);
  head = reverse(head);
  print(head);*/
  return 0;
}
