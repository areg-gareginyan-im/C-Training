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

  delete(vct, 6);

  insertElementAt(vct, 1222.0, 0);
  insertElementAt(vct, 1222.5, 5);
  insertElementAt(vct, 1222.1, 1);

  delete(vct, 0);

  printV(vct);

  printf("Index of %f: %d\n", 1222.5, indexOf(vct, 1222.5));

  printf("Press Enter to exit...");
  getchar();
  return 0;
}
