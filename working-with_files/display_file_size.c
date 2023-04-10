#include <stdio.h>
int main()
{
    FILE *fp;
    char filename[80];
    long length;

    printf("Enter file name: ");
    gets(filename);
    fp = fopen(filename, rb);

    if (fp == NULL)
    {
        printf("File not found!\n");
    }
    else
    {
        fseek(fp, OL, SEEK_END);
        length = ftell(fp);
        printf("Size of the file is %ldB in bytes\n", length);
        fclose(fp);
    }
}
