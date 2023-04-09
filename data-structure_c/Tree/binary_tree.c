/*
  ** Binary Tree

  A binary tree is a tree data structure in which each parent node can have at most two children. Each node of a binary tree consists of three items:

  * data item
  * address of left child
  * address of right child

  ** Types of Binary Tree
  
  1. Full Binary Tree
  
  A full Binary tree is a special type of binary tree in which every parent node/internal node has either two or no children.

  2. Perfect Binary Tree

  A perfect binary tree is a type of binary tree in which every internal node has exactly two child nodes and all the leaf nodes are at the same level.

  3. Complete Binary Tree

  A complete binary tree is just like a full binary tree, but with two major differences

    - Every level must be completely filled
    - All the leaf elements must lean towards the left.
    - The last leaf element might not have a right sibling i.e. a complete binary tree doesn't have to be a full binary tree.

  4. Degenerate or Pathological Tree

    A degenerate or pathological tree is the tree having a single child either left or right.

  5. Skewed Binary Tree

  A skewed binary tree is a pathological/degenerate tree in which the tree is either dominated by the left nodes or the right nodes. Thus, there are two types of skewed binary tree: left-skewed binary tree and right-skewed binary tree.

  6. Balanced Binary Tree

  It is a type of binary tree in which the difference between the height of the left and the right subtree for each node is either 0 or 1.

  ** Binary Tree Representation

  A node of a binary tree is represented by a structure containing a data part and two pointers to other structures of the same type.

  struct node {
	int data;
	struct node *left;
	struct node *right;
  };

  ** Binary Tree Application
  * For easy and quick access to data.
  * In router algorithms.
  * To Implement heap data structures.
  * Syntax tree.

*/

#include <stdio.h>
#include <stdlib.h>

struct node {
	int item;
	struct node* left;
	struct node* right;
};

// Inorder traversal
void inorderTraversal(struct node* root) {
	if (root == NULL) return;
	inorderTraversal(root->left);
	printf("%d ->", root->item);
	inorderTraversal(root->right);
}

// Preorder traversal 
void preoderTraversal(struct node* root) {
	postorderTraversal(root->left);
	postorderTraversal(root->right);
	printf("%d ->", root->item);
}

// Create a new Node
struct node* createNode(value) {
	struct node* newNode = malloc(sizeof(struct node));
	newNode->item = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return newNode;
}

// Insert on the left of the 
struct node* insertLeft(struct node* root, int value) {
	root->left = createNode(value);
	return root->left;
}

// Insert on the right of the node
struct node* insertRight(struct node* root, int value) {
	root->right = createNode(value);
	return root-right;
}

int main(int argc, char const *argv[])
{
	struct node* root = createNode(1);
	insertLeft(root, 2);
	insertRight(root, 3);
	insertLeft(root->left, 4);

	printf("Inorder traversal \n");
	inorderTraversal(root);

	printf("\nPreorder traversal \n");
	preoderTraversal(root);

	printf("\nPostorder traversal \n");
	postorderTraversal(root);
	return 0;
}