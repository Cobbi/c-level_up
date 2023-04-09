/*
  ** Full Binary Tree
  A full binary tree is a special type of binary tree in which every parent node/internal node has either two or no children.

  * It is also known as a proper binary tree.

  ** Full Binary Tree Theorems
  let, i = the number of interval node
       n = be the total number of nodes
       l = number of leaves
       ^ = number of levels.

    - The number of leaves is i + 1.
    - The total number of nodes is 2i + 1.
    - The number of internal nodes is (n – 1) / 2.
    - The number of leaves is (n + 1) / 2.
    - The total number of nodes is 2l – 1.
    - The number of internal nodes is l – 1.
    - The number of leaves is at most 2λ - 1.


*/

// Check if a binary tree is a full binary tree

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// create a new node
struct Node {
	int item;
	struct Node *left, *right;
};

// Creation of new Node
struct Node *createNewNode(char k) {
	struct Node *node = (struct Node *)malloc(sizeof(struct Node));
	node->item = k;
	node->right = node->left = NULL;
	return node;
}

// Check if Binary tree is full

bool isFullBinaryTree(struct Node *root) {
	// checking tree emptiness
	if (root == NULL) 
		return true;

		// Checking the presence of children
		if (root->left == NULL && root->right == NULL)
			return true;

		if ((root->left) && (root->right))
			return (isFullBinaryTree(root->left) && isFullBinaryTree(root->right));

		return false;
}

int main() {
	struct Node *root = NULL;
	root = createNewNode(1);
	root->left = createNewNode(2);
	root->right = createNewNode(3);

	root->left->left = createNewNode(4);
	root->left->right = createNewNode(5);
	root->left->right->left = createNewNode(6);
	root->left->right->right = createNewNode(7);

	if (isFullBinaryTree(root))
		printf("The tree is a full binary tree\n");
	else
		printf("The tree is not a full binary tree\n");
}