/*
Bubble Sort

Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order. The pass through the list is repeated until the list is sorted.

This is an inefficient sort as it has to loop through all the elements multiple times. It takes O(n^2) time to completely sort the array.

Properties

    ** Average Time Complexity: O(n^2)
    ** Stability: Stable

Best use case

This is a very elementary sort which is easy to understand and implement. It is not recommended in actual production environments. No external memory is required to sort as it is an in-place sort.

*/

#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n); 
    for(i = 0; i < n; i++) 
    scanf("%d", &arr[i]);

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted list in ascending order: \n");
    for(i = 0; i < n; i++) 
    printf("%d ", arr[i]);
    
    printf("\n");
    return 0;
}