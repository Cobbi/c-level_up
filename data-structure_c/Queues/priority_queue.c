/*
   ** Priority Queue
A priority queue is a special type of queue in which each element is associated with a priority value. And, elements are served on the basis of their priority. That is, higher priority elements are served first.

However, if elements with the same priority occur, they are served according to their order in the queue.

** Assigning Priority Value

Generally, the value of the element itself is considered for assigning the priority. For example,

The element with the highest value is considered the highest priority element. However, in other cases, we can assume the element with the lowest value as the highest priority element.

We can also set priorities according to our needs.

** Difference between Priority Queue and Normal Queue

In a queue, the first-in-first-out rule is implemented whereas, in a priority queue, the values are removed on the basis of priority. The element with the highest priority is removed first.

*/

// Priority Queue Implementation 

#include <stdio.h>
int size = 0;
// Swap function
void swap(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}

// function to heapify the tree
void heapify(int array[], int size, int i) {
    if (size == 1) {
        printf("Single element in the heap");
    } else {
        // Find the largest among the root, left child and right child
        int largest = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        if  (l < size && array[l] > array[largest])
        largest = l;
        if (r < size && array[r] > array[largest])
        largest = r;

        // Swap and continue heapifying if root is not larger
        if (largest != i) {
            swap(&array[i], &array[largest]);
            heapify(array, size, largest);
        }
    }
}

// Function to insert an element into the tree
void insert(int array[], int newNum) {
    if (size == 0) {
        array[0] = newNum;
        size += 1;
    } else {
        array[size] = newNum;
        size += 1;
        for (int i = size / 2 - 1; i >= 0; i--) {
            heapify(array, size, i);
        }
    }
} 

// Function to delete an element from the tree
void deleteRoot(int array[], int num) {
    int i;
    for (i = 0; i < size; i++) {
        if (num == array[i])
        break;
    }

    swap(&array[i], &array[size - 1]);
    size -= 1;
    for(int i = size / 2 -1; i >= 0; i--) {
        heapify(array, size, i);
    }
}

// Display the Array.
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Driver Code 
int main() {
    int array[10];

    insert(array, 0);
    insert(array, 2);
    insert(array, 3);
    insert(array, 4);
    insert(array, 5);
    insert(array, 6);
    insert(array, 7);
    insert(array, 8);
    insert(array, 9);
    insert(array, 10);
   
    printf("\nMax-Heap array: \n");
    printArray(array, size);

    deleteRoot(array, 10);
    printf("\nAfter Deleting an element: \n");

    printArray(array, size);
    
    return 0;
}