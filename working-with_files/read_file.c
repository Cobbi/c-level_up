#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int num;
	FILE *fpt;

	if ((fpt = fopen("program.txt", "r")) == NULL) {
		printf("Error! opening file");

		// Program exits if file pointer return NULL.
		exit(1);
	}
	fscanf(fpt, "%d", &num);

	printf("Value of n=%d\n", num);
	fclose(fpt);
	return 0;
}
