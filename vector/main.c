#include <stdio.h>
#include "./vector/vector.h"

int main() {
  struct vector *vct = newVector();

  push(vct, 10.2);
  push(vct, 10.4);
  push(vct, 0.2);
  push(vct, -10.2);
  push(vct, 0.2);
  push(vct, -10.2);
  push(vct, 0.2);
  push(vct, -10.2);
  push(vct, 0.2);
  push(vct, -10.2);
  push(vct, 0.2);
  push(vct, 0);
  push(vct, -21.54984);
  push(vct, 1541);


  printV(vct);

  printf("Press Enter to exit...");
  getchar();
  return 0;
}
