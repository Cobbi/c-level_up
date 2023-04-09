/*
  ** Perfect Binary Tree
  A perfect binary tree is a type of binary tree in which every internal node has exactly two child nodes and all the leaf nodes are at the same level.

  All the internal nodes have a degree of 2.

  Recursively, a perfect binary tree can be defined as: 
  - if a single node has no children,  it is a perfect binary tree of height h = 0;
  - if a node has h > 0, it is a perfect binary tree if both of its subtrees are of height h - 1 and are non-overlapping.

  ** Perfect Binary Tree Theorems

   - A perfect binary tree of height h has 2h + 1 – 1 node.
   - A perfect binary tree with n nodes has height log(n + 1) – 1 = Θ(ln(n)).
   - A perfect binary tree of height h has 2h leaf nodes.
   - The average depth of a node in a perfect binary tree is Θ(ln(n)).


*/

// Checking if a binary tree is a perfect binary tree 

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *left, *right;
};

// Creating a new node
struct node *newNode(int data) {
	struct node *node = (struct node *)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return (node);
}

// Calculate the depth of node
int depth(struct node *node) {
	int d = 0;
	while (node != NULL) {
		d++;
		node = node->left;
	}
	return d;
}

// check if the treee is perfect

bool is_perfect(struct node *root, int d, int level) {
	
}
