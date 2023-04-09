// A program to check whether a letter entered is a Vowel or Not.
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char c;
	printf("Enter a letter: ");
	scanf("%c", &c);

	if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u') 
	{
		printf("\n%c is a Vowel\n", c);
	} else {
		printf("\nLetter entered is not a Vowel\n");
	}
	return 0;
}