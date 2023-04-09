/*
A file is a container in computer storage devices used for storing data.

  file declaration
  FILE *fptr;


*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num; 
    FILE *fptr;

    fptr = fopen("program.txt", "w");

    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }

    printf("Enter num: ");
    scanf("%d", &num);

    fprintf(fptr, "\n%d\n", num);
    fclose(fptr);

    return 0;
}