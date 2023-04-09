// A Program that will find the greatest common divisor of two given Numbers.
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int firstNumber, secondNumber, i, gcd;
	printf("Enter the two Numbers: ");
	scanf("%d %d", &firstNumber, &secondNumber);

	for (i = 1; i <= firstNumber && i <= secondNumber; i++) {
		if (firstNumber%i == 0 && secondNumber%i == 0)
			gcd = i;
	}
	printf("The greatest common divisor is: %d\n", gcd);
	return 0;
}