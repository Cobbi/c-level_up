#include <stdio.h>

enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main(int argc, char const *argv[])
{
	// initializing today variable of enum week type
	enum week today;
	today = Wednesday;
	printf("Day %d\n", today+1); // plus 1 because an array start from zero, Now it will start couting from 1.
	return 0;
}