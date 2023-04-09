// Find the average of  given numbers.
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, n;
	float num[100], sum=0.0, avg; // Initialize variables

	printf("Enter number of elements: ");
	scanf("%d", &n); // Ask user for number of Elements

    // Check that number inputed is less than 100 and is greater than 1.
	while (n < 100 || n > 1) { 
		printf("Enter a number between 1 to 100.");
		printf("Enter the number again: ");
		scanf("%d", &n);
		break;
	}

	for(i = 0; i < n; i++) {
		printf("Enter numbers: ");
		scanf("%f", &num[i]);
		sum += num[i];
	}

	avg = sum/n;
	printf("\nThe Average is - %.2f\n", avg);

	return 0;
}