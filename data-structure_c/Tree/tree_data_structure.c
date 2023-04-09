/*
  ** Tree Data Structure
  A tree is a nonlinear hierarchical data structure that consists of nodes connected by edges.

  * Why Tree Data Structure?

  Other data structures such as arrays, linked list, stack, and queue are linear data structures that store data sequentially. In order to perform any operation in a linear data structure, the time complexity increases with the increase in the data size. But, it is not acceptable in today's computational world.

  Different tree data structures allow quicker and easier access to the data as it is a non-linear data structure

  ** Tree Terminologies
  * Node

  A node is an entity that contains a key or value and pointers to its child nodes.

  The last nodes of each path are called leaf nodes or external nodes that do not contain a link/pointer to child nodes.

   The node having at least a child node is called an internal node.

  * Edge
  It is the link between any two nodes.

  ** Root

  It is the topmost node of a tree.
  
  * Height of a Node

  The height of a node is the number of edges from the node to the deepest leaf (ie. the longest path from the node to a leaf node).
  
  * Depth of a Node

  The depth of a node is the number of edges from the root to the node.
  
  * Height of a Tree

  The height of a Tree is the height of the root node or the depth of the deepest node.
  
  * Degree of a Node

  The degree of a node is the total number of branches of that node.
  
  * Forest

  A collection of disjoint trees is called a forest.


  Tree Traversal

  In order to perform any operation on a tree, you need to reach to the specific node. The tree traversal algorithm helps in visiting a required node in the tree.
  
  * Tree Applications

    * Binary Search Trees(BSTs) are used to quickly check whether an element is present in a set or not.
    * Heap is a kind of tree that is used for heap sort.
    * A modified version of a tree called Tries is used in modern routers to store routing information.
    * Most popular databases use B-Trees and T-Trees, which are variants of the tree structure we learned above to store their data
    * Compilers use a syntax tree to validate the syntax of every program you write.



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

// PreorderTraversal traversal
void preoderTraversal(struct node* root) {
	printf("%d -> ", root->item);
	preoderTraversal(root->left);
	preoderTraversal(root->right);
}

// Create a new Node
struct node* createNode(value) {
struct node* newNode = malloc(sizeof(struct node));
newNode->item = value;
newNode->left = NULL;
newNode->right = NULL;

return newNode;
}

// Insert on the left of the node
struct node* insertLeft(struct node* root, int value) {
	root->left = createNode(value);
	return root->left;
}

// Insert on the right of the node
struct node* insertRight(struct node* root, int value) {
	root->right = createNode(value);
	return root->right;
}

int main(int argc, char const *argv[])
{
	struct node* root = createNode(1);
	insertLeft(root, 12);
	insertRight(root, 9);

	insertLeft(root->left, 5);
	insertRight(root->left, 6);

	printf("Inorder traversal \n");
	preoderTraversal(root);

	printf("\nPostorder traversal \n");
	postorderTraversal(root);
	return 0;
}