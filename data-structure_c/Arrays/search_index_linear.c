/*
Linear Search

The simplest search to be done on an array is the linear search. This search starts from one end of the array and keeps iterating until the element is found, or there are no more elements left (which means that the element does not exist).

There are no prerequisites for this search to work on an array. It can be used reliably in any situation.

Best use case

This search is best used when the list of elements is unsorted and the search is to be performed only once. It is also preferred for list to be small, as the time taken grows with the size of the data.
Time Complexity

    ** Average: O(n) 
    ** Best: O(1) 
    ** Worst: O(n)

The average time complexity is O(n) as the element to be found may be present at the end of the list or may not be present at all. Linear search has to visit all the elements until the needed element is found. Algorithmically, this comes out to be O(n).

The best and worst case of a search algorithm will be O(1) and O(n) respectively, as the element to be searched could always be found on the first iteration or the last iteration.

*/

#include <stdio.h>

int main() {
    int array[100], search, c, n;

    printf("Enter number of elements in array: ");
    scanf("%d",&n);

    printf("Enter %d integers: ", n);
    for(c = 0; c<n; c++)
    scanf("%d", &array[c]);

    printf("Enter a number to search: ");
    scanf("%d", &search);

    for(c = 0; c < n; c++) {
        if (array[c] == search) {
            printf("%d is present at  location %d.\n", search, c+1);
            break;
        }
    }
    if (c == n)
    printf("%d isn't present in the array.\n", search);

    return 0;
}
