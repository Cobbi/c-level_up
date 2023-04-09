#include <stdio.h>

#define SIZE 10

int main(int argc, char const *argv[])
{
	int queue[SIZE];
    int front = - 1, rear = - 1;

    void enQueue(int value) {
    	if(rear == SIZE - 1) 
    		printf("\nOverflow. Queue is Full.\n");
     else {
    	if(front == - 1)
    		front = 0;
    	rear++;
    	queue[rear] = value;
    	printf("\nInsertion was successful.");
    }
    }	
    enQueue(4);
    enQueue(3);
    enQueue(2);
    enQueue(1);
    enQueue(4);
    enQueue(3);
    enQueue(2);
    enQueue(1);
    enQueue(4);
    enQueue(3);

   void deQueue() {
   	if(front == rear) {
   		printf("\nUnderflow. Queue is Empty.");
   	} else {
   		printf("\nDeleted item is: %d", queue[front]);
   		front++;
   		if(front == rear)
   			front = rear = - 1;
   	}
   }

   deQueue();
   deQueue();
    //enQueue(2);
    
	return 0;
}