#include <stdio.h>

void foo();

int main() {
  foo();

  foo();
  foo();
  return 0;
}

void foo() {
  static int i = 1;
  printf("foo() function is called %d times\n", i++);
}
