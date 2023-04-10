/*
  ** Linked Lists
  A linked list is a linear data structure where each element is a separate object, known as a node . Each node contains some data and points to the next node in the structure, forming a sequence. The nodes may be at different memory locations, unlike arrays where all the elements are stored continuously.

  ** Advantages of linked list over Arrays.

  The 2 advantages of a linked list over an array are:

  * Not fixed in size: A linked list is not fixed in size. The memory locations to store the nodes are allocated dynamically when each node is created. There is no wastage of memory for unused locations. In comparison, an array can only be defined once of a specific size, and then further cannot be extended or shrunk down accordingly.
   
   * Efficient Insertion and Deletion: A quick manipulation of the links between the nodes allows for a constant time taken for insertion and deletion. In contrast, one has to move over all the memory locations while dealing with arrays so that they are in order.

   ** Disadvantages over Arrays

   There are some disadvantages of using linked lists when compared to arrays though.

   * Only sequential access: As the data is linked together through nodes, any node can only be accessed by the node linking to it, hence it is not possible to randomly access any node. One has to go through the links searching for the element required.

   * Memory Usage of each node: The nodes that hold the data need extra memory to hold the pointer to the next node. Each element hence takes slightly more memory than an array.

  ** Types of Linked Lists

   A linked list is designed depending on its use. The 3 most common types of a linked list are:

   * Singly Linked Lists
   * Doubly Linked Lists
   * Circular Linked Lists

   ** Representation of linked list
    * A data item.
    * An address of another node.

    eg. struct node {
       int data;
       struct node *next;
    };

    Understanding the structure of a linked list node is the key to having a grasp on it. Each struct node has a data item and a pointer to another struct node.

    Apart from that, linked lists are a great way to learn how pointers work. By practicing how to manipulate linked lists, you can prepare yourself to learn more advanced data structures like graphs and trees.

    ** Linked List Applications

    * Dynamic memory allocation
    * Implemented in stack and queue
    * In undo functionality of softwares
    * Hash tables, Graphs


*/

#include <stdio.h>
#include <stdlib.h>

// creating a node
struct node {
  int value;
  struct node *next;
};

// Display the linked list value
void printLinklist(struct node *p) {
  while (p != NULL) {
    printf("%d ", p->value);
    p = p->next;
  }
  printf("\n");
}

int main(int argc, char const *argv[])
{
  // Initialize nodes
  struct node *head;
  struct node *one;
  struct node *two;
  struct node *three;

  // Allocate memory
  one = malloc(sizeof(struct node));
  two = malloc(sizeof(struct node));
  three = malloc(sizeof(struct node));

  // Assign value values
  one->value = 1;
  two->value = 2;
  three->value = 3;

  // connect node
  one->next = two;
  two->next = three;
  three->next = NULL;

  // printing node value
  head = one;
  printLinklist(head);

   if(head == NULL) {
    printf("Error! You are at the end of the list.\n");
  }

  return 0;
}
