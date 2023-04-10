/*
A file is a container in computer storage devices used for storing data.

  file declaration
  FILE *fptr;


*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num; 
    FILE *fpt;

    fpt = fopen("program.txt", "w");

    if (fpt == NULL) {
        printf("Error!");
        exit(1);
    }

    printf("Enter num: ");
    scanf("%d", &num);

    fprintf(fpt, "\n%d\n", num);
    fclose(fpt);

    return 0;
}
