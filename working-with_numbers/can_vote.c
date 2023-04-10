/* A program to check whether an individual can vote.
 An individual must be born in the country or 
 must have lived in it for ten (10yrs) years.
 for he/she to be considered a citizen.*/
#include <stdio.h>

int voter() {
	int age;
	char name[50];

	printf("Enter name: ");
	scanf("%s", name);
	printf("Enter Age: ");
	scanf("%d", &age);

	if(age >= 18 ) {
       printf("%s is a legal voter %d\n",name, age);
	}else {
		printf("%s is NOT a legal voter %d\n",name, age);
	}
}

int main(int argc, char const *argv[])
{
	int inCountryFor;
	printf("How long have you lived in this country for: ");
	scanf("%d", &inCountryFor);
	voter();
	if(inCountryFor >= 10 && age >= 18) {
		//voter();
		printf("You can vote at %d\n", inCountryFor);
	}

	return 0;
}
