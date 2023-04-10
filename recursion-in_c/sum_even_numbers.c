// Ask the user to enter a positive number of an array, then we sum the even numbers in the array.
#include <stdio.h>

void sumOfEven(int a[], int num, int sum);

int main(int argc, char const *argv[])
{
	int i, a[100], num, sum=0;

	printf("Enter number of array Elements: "); // Take user input
	scanf("%d", &num);
	
	printf("Enter array elements: ");
	for(i=0; i<num; i++){
		scanf("%d", &a[i]);
	}
	sumOfEven(a, num-1, sum);
	return 0;
}

void sumOfEven(int a[], int num, int sum) {
	if (num >= 0) {
		if((a[num])%2 == 0) {
			sum+=(a[num]);
		}
		sumOfEven(a, num-1, sum);
	}
	else {
		printf("Sum=%d\n", sum);
	}
}
