// A program that count the letters in a sentence entered by user.
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char str[100];
	int i, len=0;

	printf("Enter a string to know its length: ");
	fgets(str, 100, stdin);

	for(i = 0; str[i] != '\0'; i++) {
		len++;
	}
	printf("The length of %s is %d", str, len);\
	printf("\n");

	return 0;
}