#include <stdio.h>
int getGCD(int temp1, int temp2);
int main(int argc, char const *argv[])
{
	int num1, num2, gcd, lcm, x;

	printf("Enter number 1 and number 2: ");
	scanf("%d%d", &num1, &num2);

	gcd = getGCD(num1, num2);
	lcm = (num1 * num2)/gcd;

	printf("Gcd is %d\n", gcd);
	printf("Lcm is %d\n", lcm);
	return 0;
}

int getGCD(int temp1, int temp2) {
	if(temp2 != 0) {
		getGCD(temp2, temp1 % temp2);
	} else {
		return(temp1);
	}
}