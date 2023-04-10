// A program to check whether a letter entered is a Vowel or Not.
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char ch;
	printf("Enter a letter: ");
	scanf("%c", &ch);

	if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u') 
	{
		printf("\n%c is a vowel\n", c);
	} else {
		printf("\nLetter entered is not a vowel\n");
	}
	return 0;
}
