/*
  ** Queues Using linked List

  A queue can be implemented using a linked list. This has various advantages over an array representation because the size of the queue does not have to be decided before the queue is created.

  Linked list allows memory to be allocated dynamically depending on the elements added and therefore does not waste or take more memory than required.

  ** Creating the queue

    * Include all the header files which are used in the program.
    * Define a Node structure with two members data and next.
    * Define two Node pointers front and rear and set both to NULL.

  ** Inserting an element (EnQueue)

    * Create a newNode with the given value and set newNode → next = NULL.
    * Check whether the queue is empty (rear == NULL). 
    * If it is empty then, set front = newNode and rear = newNode.
    * If it is not empty then, set rear → next = newNode and rear = newNode.

*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
}*front = NULL, *rear = NULL;

void enQueue(int value) {
	struct Node *newNode;
	newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode -> data = value;
	newNode -> next = NULL;
	if (front = NULL)
		front = rear = newNode;
	else {
		rear -> next = newNode;
		rear = newNode;
	}
	printf("\nInsertion is Successful\n");
}

void deQueue() {
	if (front == NULL)
		printf("\nUnderflow. Queue is Empty.");
	else {
		struct Node *temp = front;
		front = front -> next;
		printf("\nDeleted element: %d\n", temp);
		free(temp);
	}
}

void display() {
	if (front == NULL)
		printf("\nQueue is Empty!\n");
	else {
		struct Node *temp = front;
		while (temp -> next != NULL) {
			printf("%d--->\n", temp -> data);
			temp = temp -> next;
		}
		printf("%d--->NULL\n", temp -> data);
	}
}

int main(int argc, char const *argv[])
{
	int choice, value;
	while(1) {
		printf("\nQueue using Linked List\n");
		printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch(choice) {
			case 1: printf("Enter the value to be inserted: ");
			    scanf("%d", &value);
			    enQueue(value);
			    break;
			case 2: deQueue();
			        break;
			case 3: display();
			        break;
			case 4: exit(0);
			default: printf("\nWrong choice. Please try again\n");
		}
	}
	return 0;
}