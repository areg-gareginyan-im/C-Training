#include <stdio.h>
#include "./tree/tree.h"

int main() {
	struct node* root = NULL;
	root = put(root, 5);
	put(root, 15);
	put(root, -2);
	/** TODO: Add new elements */

	printf("Root: %d\n", root->data);
	printf("Root left: %d\n", root->left->data);
	printf("Root right: %d\n", root->right->data);

	printf("Press Enter to exit!\n");
	getchar();
	return 0;
}