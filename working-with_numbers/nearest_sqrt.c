// Find the Nearest square root of number
#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;
	double result;

	printf("Enter number: ");
	scanf("%d", &number);

	result = sqrt(number); // add -lm to gcc command when compiling.
	int final_result = result+.5;

	printf("Result is: %d\n", final_result);
	return 0;
}