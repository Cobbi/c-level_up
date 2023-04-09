/*
  There are various linked list operations that allow us to perform different actions on linked lists. For example, the insertion operation adds a new element to the linked list.

  Here's a list of basic linked list operations that we will cover in this article.

    * Traversal - access each element of the linked list
    * Insertion - adds a new element to the linked list
    * Deletion - removes the existing elements
    * Search - find a node in the linked list
    * Sort - sort the nodes of the linked list

  Before you learn about linked list operations in detail, make sure to know about Linked List first.

   ** Things to Remember about Linked List

    * head points to the first node of the linked list
    * next pointer of the last node is NULL, so if the next current node is NULL, we have reached the end of the linked list.


*/

#include <stdio.h>
#include <stdlib.h>

// Create a node
struct Node {
	int data;
	struct Node* next;
};

// Insert at the beginning
void insertAtBeginning(struct Node** head_ref, int new_data) {
	// Allocate memory to a code
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

	// insert the data
	new_node->data = new_data;
	new_node->next = (*head_ref);

	// Move head to new node
	(*head_ref) = new_node;
}

// Insert a node after a node
void insertAfter(struct Node* prev_node, int new_data) {
	if(prev_node == NULL) {
		printf("The given node cannot be NULL\n");
		return;
	}
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
}

// Insert at the end
void insertAtEnd(struct Node** head_ref, int new_data) {
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); 
	struct Node* last = *head_ref; 

	new_node->data = new_data;
	new_node->next = NULL;

	if (*head_ref == NULL) {
		*head_ref = new_node;
		return;
	}

	while (last->next != NULL)  last = last->next;

	last->next = new_node;
	return;
}

// Delete a node
void deleteNode(struct Node** head_ref, int key) {
	struct Node *temp = *head_ref, *prev;

	if (temp != NULL && temp->data == key) {
		*head_ref = temp->next;
		free(temp);
		return;
	}
	// Find the key to be deleted
	while (temp != NULL && temp->data != key) {
		prev = temp;
		temp = temp->next;
	}

	// if the key is not present
	if (temp == NULL) return;

	// Remove the  node
	prev->next = temp->next;
	free(temp);
}

// Search a node
int searchNode(struct Node** head_ref, int key) {
	struct Node *current = *head_ref;

	while (current !=  NULL) {
		if (current->data == key) return 1;
	}
	return 0;
}

// Sort the linked list
void sortLinkedList(struct Node** head_ref) {
	struct Node *current = *head_ref, *index = NULL;
  int temp;

  if (head_ref = NULL) {
  	return;
  } else {
  	while (current != NULL) {
  		// index points to the node next to current
  		index = current->next;

  		while (index != NULL) {
  			if (current->data > index->data) {
  				temp = current->data;
  				current->data = index->data;
  				index->data = temp;
  			}
  			index = index->next;
  		} 
  		current = current->next;
  	}
  }
}

// Display the linked list
void printList(struct Node* node) {
	while (node != NULL) {
		printf(" %d ", node->data);
		node = node->next;
	}
	printf("\n");
}

// Driver Program
int main(int argc, char const *argv[])
{
	struct Node* head = NULL;

	insertAtEnd(&head, 1);
	insertAtBeginning(&head, 2);
	insertAtBeginning(&head, 3);
	insertAtEnd(&head, 4);
	insertAfter(head->next, 5);

	printf("\nLisked List: ");
	printList(head);

	printf("\nAfter Deleting an element: ");
	deleteNode(&head, 3);
	printList(head);

 //Check this piece of code, it kind of freezes
  
	// int item_to_find = 3;
	// if (searchNode(&head, item_to_find)) {
	// printf("\n%d is Found", item_to_find);
	// } else {
	// 	printf("\n%d is not Found", item_to_find);
	// }

	sortLinkedList(&head);
	printf("\nSorted List: ");
	printList(head);
	return 0;
}