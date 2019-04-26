#include <stdlib.h>
#include <stdio.h>
#include "./list/list.h"

int main() {
  int n = 4;
  node head = newLinkedList();
  long startTime = getMicrotime();
  printf("Start to push data into Linked List...\n");
  head = initialize(head, 1000000);
  printf("\nInitialization time of 1M nodes in microseconds: %lu\n", getMicrotime() - startTime);
  /* print(head); */
  startTime = getMicrotime();
  head = shuffleN(head, n);
  printf("\nShuffling takes %lu microseconds for 1M nodes and n = %d\n", getMicrotime() - startTime, n);
  /*print(head);
  head = reverse(head);
  print(head);*/
  return 0;
}
