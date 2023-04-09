// A Program to add two matrices

#include <stdio.h>
int main(int argc, char const *argv[])
{
	float a[2][2], b[2][2], result[2][2];
   
	// take input for first variable
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++) {
			printf("a%d%d: ", i,j);
			scanf("%f", &a[i][j]);
		}
	}

	// take input for second variable
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			printf("b%d%d: ", i,j);
			scanf("%f", &b[i][j]);
		}
	}

	// Adding the two arrays
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			result[i][j] = a[i][j] + b[i][j];
		}
	}

	//Displaying Result after adding the two
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			printf("Result %.2f\n", result[i][j]);
		}
	}

	return 0;
}