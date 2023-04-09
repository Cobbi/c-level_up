// Read from a binary file using fread()

#include <stdio.h>
#include <stdlib.h>

struct threeNum {
	int n1, n2, n3;
};

int main(int argc, char const *argv[])
{
	int n;
	struct threeNum num;
	FILE *fptr;

	if((fptr = fopen("program.txt", "rb")) == NULL)
		printf("Error! Opening file.");
	exit(1);
    for(n=1; n < 5; n++) {
    	fread(&num, sizeof(struct threeNum), 1, fptr);
    	printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);

    }
    fclose(fptr);

	return 0;
}