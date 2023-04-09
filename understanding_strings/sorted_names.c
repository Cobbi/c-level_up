// A program that sort names in Alphabetical order
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int i, j, n;
	char str[100][100], s[100];

	printf("Enter number of names: ");
	scanf("%d", &n);

	printf("Enter names in any order: ");
	for(i=0; i<n; i++) {
		scanf("%s",str[i]);
	}

	for(i=0; i<n; i++) {
		for(j=i+1; j<n; j++) {
			if(strcmp(str[i], str[j])>0) {
				strcpy(s,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],s);
			}
		}
	}

	printf("\n\nThe sorted order of the alphabets: \n");
	for(i=0;i<n;i++) {
		printf("%s\n", str[i]);
	}

	return 0;
}