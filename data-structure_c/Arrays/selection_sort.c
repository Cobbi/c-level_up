/*
Selection Sort

Selection sort is generally used for sorting files with very large records and small keys. It selects the smallest (or largest) element in the array and then removes it to place in a new list. Doing this multiple times would yield the sorted array.

Properties

    ** Average Time Complexity: O(n^2)
    ** Stability: Non Stable

Best use case

This sort is not influenced by the initial ordering of elements in the array and can be used to efficiently sort small lists.
It performs the least amount of data movement amongst all sorts, 
therefore it could be used where data manipulation is costly.

*/

#include <stdio.h>

int main() {
    // initialize variables
    int array[100], n, pos, temp, i, j;

    // Ask user to enter array size
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    // Enter values in array to be sorted
    printf("Enter the %d values: ", n);
    for(i = 0; i < n; i++)
    scanf("%d", &array[i]);

    for(i = 0; i < (n - 1); i++) {
        pos = i;

        for(j = i + 1; j < n; j++) {
            if (array[pos] > array[j])
            pos = j;
        }
        if (pos != i) {
            temp = array[i];
            array[i] = array[pos];
            array[pos] = temp;
        }
    }
    
    // Display Sorted Values
    printf("Sorted list in ascending order: ");
    for(i = 0; i < n; i++) 
    printf("%d ", array[i]);

    printf("\n");
    return 0;
}