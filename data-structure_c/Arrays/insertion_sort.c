/*
Insertion Sort

In insertion sort, every iteration moves an element from unsorted portion to sorted portion until all the elements are sorted in the list. An analogy of insertion sort is the sorting of a deck of cards with our hands. We select one card from the unsorted deck and put it in the right order in our hands, effectively sorting the whole deck.

Properties

    ** Average Time Complexity: O(n^2)
    ** Stability: Stable

Best use case

Although this is a elementary sort with the worst case of O(n^2), it performs much better when the array is nearly sorted, as lesser elements would have to be moved. It is also preferred when the number of elements are less as it has significantly less overhead than the other sorts. It consumes less memory and is simpler to implement.

In some quick sort implementations, insertion sort is internally to sort the smaller lists faster.

*/

#include <stdio.h>

int main(int argc, char const *argv[]) 
{
    int data[100], n, temp, i, j;
    printf("Enter number of elements to sorted: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    scanf("%d", &data[i]);

    for(i = 0; i < n; i++) {
        temp = data[i];
        j = i - 1;
        while(temp < data[j] && j>=0) {
            data[j+1] = data[j];
            j = j - 1;
        }
        data[j + 1] = temp;
    }
    printf("Sorted array: ");
    for(i = 0; i < n; i++)
    printf("%d ", data[i]);

    printf("\n");
    return 0;
}