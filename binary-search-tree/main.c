#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include "./tree/tree.h"

/**
 * pushes random integers with [0,20] range
 */
void pushRandomIntegers(struct node *root, unsigned int count);

int main() {
	struct node *root = NULL;
	int val = 8;
	root = put(root, 5);
	pushRandomIntegers(root, 20);

	printf("Root: %d\n", root->data);

  print(root, 4);
	printf("\n%d is found in Tree: %s\n", val, find(root, val) ? "true": "false");
	printf("Press Enter to exit...");
	getchar();
	return 0;
}

void pushRandomIntegers(struct node *root, unsigned int count) {
	srand(time(NULL));
	while(count--) {
		put(root, rand() % 20);
	}
}