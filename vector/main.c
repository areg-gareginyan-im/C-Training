#include <stdio.h>
#include "./vector/vector.h"

int main() {
  vector *vct = newVector();

  push(vct, 1);
  push(vct, 2);
  push(vct, 3);
  push(vct, 4);
  push(vct, 5);
  push(vct, 6);
  push(vct, 7);
  push(vct, 8);
  push(vct, 9);
  push(vct, 10);
  push(vct, 11);
  push(vct, 12);
  push(vct, 13);
  push(vct, 14);

  insertElementAt(vct, 1222.0, 0);
  insertElementAt(vct, 1222.5, 5);
  insertElementAt(vct, 1222.1, 1);
  insertElementAt(vct, 1222.15, 15);

  printV(vct);
  printf("Index of %f: %d\n", 10.0, indexOf(vct, 10));
  printf("Press Enter to exit...");
  getchar();
  return 0;
}
