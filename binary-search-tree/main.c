#include <stdio.h>
#include <stdbool.h>
#include "./tree/tree.h"

void pushRandomIntegers() {

}

int main() {
	struct node* root = NULL;
	int val = 0;
	root = put(root, 5);
	pushRandomIntegers(root);
	put(root, 15);
	put(root, -2);
	put(root, 1);
	put(root, -21);
	put(root, 150);
	put(root, -26);
	/** TODO: Add new elements */

	printf("Root: %d\n", root->data);
	printf("Root left: %d\n", root->left->data);
	printf("Root right: %d\n", root->right->data);

	printf("Root right: %d\n", root->right->data);
	printf("root->left->left->left: %d\n", root->left->left->left->data);
	printf("root->left->right: %d\n", root->left->right->data);

	printf("%d is found in Tree: %s\n", val, find(root, val) ? "true": "false");
  print(root, 4);
	printf("Press Enter to exit...");
	getchar();
	return 0;
}
