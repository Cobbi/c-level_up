#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int num;
	FILE *fptr;

	if ((fptr = fopen("program.txt", "r")) == NULL) {
		printf("Error! opening file");

		// Program exits if file pointer return NULL.
		exit(1);
	}
	fscanf(fptr, "%d", &num);

	printf("Value of n=%d\n", num);
	fclose(fptr);
	return 0;
}