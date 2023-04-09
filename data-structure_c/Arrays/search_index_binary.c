/*
Binary Search

The linear search approach has one disadvantage. Finding elements in a large array will be time consuming. As the array grows, the time will increase linearly. A binary search can be used as a solution to this problem in some cases.

The principle of binary search is how we find a page in book. We open the book at a random page in the middle and based on that page we narrow our search to the left or right of the book. Indeed, this only is possible if the page numbers are in order.

Hence, the prerequisite of performing a binary search is that the array must be sorted. That is why this works only in cases where keeping a sorted copy of the array is possible.

The search starts by accessing the middle of the array. If the element is less than this element, it starts its search from this element to the left of the array. If the element is larger more than this element, it starts its search from this element to the right of the array. This process is repeated unless a the middle element is equal to the number we are searching.

Best use case

This search is best used when the list of elements is already sorted (not always feasible, especially when new elements are frequently being inserted). The list to be searched can be very large without much decrease in searching time, due to the logarithmic time complexity of the algorithm.
Time Complexity

    ** Average: O(log n)
    ** Best: O(1)
    ** Worst: O(n)

The average time complexity of this algorithm of searching is O(log n) as the number of elements to search halves during each iteration.

The best and worst case of a search algorithm will be O(1) and O(n) respectively, as the element to be searched could always be found on the first iteration or the last iteration.

*/

#include <stdio.h>

int main() {
    int c, first, last, middle, n, search, array[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter all %d integers in sorted order: ", n);
    for(c = 0; c < n; c++)
    scanf("%d", &array[c]); 
    
    printf("Enter value to find: ");
    scanf("%d", &search);

    first = 0;
    last = n - 1;
    middle = (first+last)/2;

    while (first <= last) {
        if(array[middle] < search)
        first = middle + 1;
        else if (array[middle] == search) {
            printf("%d found at location %d.\n", search, middle+1);
            break;
        }else
        last = middle - 1;
        middle = (first + last)/2;
    }
    if (first > last)
    printf("%d is not found in the array.\n", search);
    return 0;
}