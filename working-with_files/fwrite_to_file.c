// Writing to a binary file.
#include <stdio.h>
#include <stdlib.h>

struct threeNum {
	int n1, n2, n3;
};

int main(int argc, char const *argv[])
{
	// Declare variables
	int n;
	struct threeNum num;
	FILE *fptr;
    
    // Open file if exists else create it.
	if ((fptr = fopen("program.bin", "wb")) == NULL) {
		printf("Error! Opening file.");

		// Program exits if the file pointer returns NULL.
		exit(1);
	}

	for(n=1; n<5; n++) {
		num.n1 = n;
		num.n2 = 5*n;
		num.n3 = 5*n + 1;
		fwrite(&num, sizeof(struct threeNum), 1, fptr); // write to file
	}
	fclose(fptr); // close file
	return 0;
}