#include <stdio.h>
#include "./vector/vector.h"

int main() {
  vector *vct = newVector();

  insert(vct, 1);
  insert(vct, 2);
  insert(vct, 3);
  insert(vct, 6);
  insert(vct, 7);
  insert(vct, 4);
  insert(vct, 5);
  insert(vct, 8);
  insert(vct, 9);

  delete(vct, 6);

  insertElementAt(vct, 1222.0, 0);
  insertElementAt(vct, -1222.5, 5);
  insertElementAt(vct, 1222.1, 1);

  delete(vct, 0);

  printV(vct);

  printf("Index of %f: %d\n", 1222.5, indexOf(vct, 1222.5));

  printf("Sorting the vector...");
  sort(vct);
  printV(vct);

  printf("Shuffling the vector using Fisher–Yates shuffle Algorithm...");
  shuffle(vct);
  printV(vct);

  printf("Press Enter to exit...");
  getchar();
  return 0;
}
