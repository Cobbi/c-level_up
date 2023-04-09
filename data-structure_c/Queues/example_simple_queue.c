/*
  ** Queue Data Structures

  A queue is a useful data structure in programming. It is similar to the ticket queue outside a cinema hall, where the first person entering the queue is the first person who gets the ticket.

  Queue follows the First In First Out (FIFO) rule - the item that goes in first is the item that comes out first.
  Representation of Queue in first in first out principle

  ** Basic Operations of Queue

  A queue is an object (an abstract data structure - ADT) that allows the following operations:

    * Enqueue: Add an element to the end of the queue
    * Dequeue: Remove an element from the front of the queue
    * IsEmpty: Check if the queue is empty
    * IsFull: Check if the queue is full
    * Peek: Get the value of the front of the queue without removing it

    * CPU scheduling, Disk Scheduling
    * When data is transferred asynchronously between two processes.The queue is used for synchronization. For example: IO Buffers, pipes, file IO, etc
    * Handling of interrupts in real-time systems.
    * Call Center phone systems use Queues to hold people calling them in order.

*/
// Queue implementation 

#include <stdio.h>
#define SIZE 5

void enQueue(int);
void deQueue();
void display();

int items[SIZE], front = -1, rear = -1;

int main() {
  //deQueue is not possible on empty queue
  deQueue();

  //enQueue 5 elements
  enQueue(7);
  enQueue(1);
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(5);

  // 6th element can't be added to because the queue is full
  enQueue(6);

  display();

  //deQueue removes element entered first i.e. 1
  deQueue();
  deQueue();

  //Now we have just 4 elements
  display();

  return 0;
}

// full queue 
void enQueue(int value) {
  if (rear == SIZE - 1)
    printf("\nQueue is Full!!");
  else {
    if (front == -1)
      front = 0;
    rear++;
    items[rear] = value;
    printf("\nInserted -> %d", value);
  }
}

void deQueue() {
  if (front == -1)
    printf("\nQueue is Empty!!!");
  else {
    printf("\nDeleted : %d", items[front]);
    front++;
    if (front > rear)
      front = rear = -1;
  }
}

// Function to print the queue
void display() {
  if (rear == -1)
    printf("\nQueue is Empty!!!");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", items[i]);
  }
  printf("\n");
}