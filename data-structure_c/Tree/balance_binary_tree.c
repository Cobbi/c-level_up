/*
  A balanced binary tree, also referred to as a height-balanced binary tree, is defined as a binary tree in which the height of the left and right subtree of any node differ by not more than 1.

  ** Following are the conditions for a height-balanced binary tree:

    * difference between the left and the right subtree for any node is not more than one
    * the left subtree is balanced
    * the right subtree is balanced

    Balanced Binary Tree Applications
    * AVL tree
    * Balanced Binary Search Tree


*/

 // Checking if a binary tree is height balanced.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Node creation
struct node {
	int item;
	struct node *left;
	struct node *right;
};

// Create a new node
struct node *newNode(int item) {
	struct node *node = (struct node *)malloc(sizeof(struct node));
	node->item = item;
	node->left = NULL;
	node->right = NULL;

	return (node);
}

// Check for height balance 
bool checkHeightBalance(struct node *root, int *height) {
	// Check for emptiness
	int leftHeight = 0, rightHeight = 0;
	int l = 0, r = 0;

	if (root == NULL) {
		*height = 0;
		return 1;
	}

	l = checkHeightBalance(root->left, &leftHeight);
	r = checkHeightBalance(root->right, &rightHeight);
	*height = (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;

	if ((leftHeight - rightHeight >= 2) || (rightHeight - leftHeight >= 2))
		return 0;
	else
		return l && r;

}

int main(int argc, char const *argv[])
{
	int height = 0;

	struct node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	if (checkHeightBalance(root, &height))
		printf("\nThe tree is balanced\n");
	else
		printf("\nThe tree is not balancedn");
	return 0;
}