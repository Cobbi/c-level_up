// A program that takes the number of students and thier marks and store it in a file.
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Variable Declaration
    char name[30];
    int num, i, marks;
    
    // Ask for number of students
    printf("Enter Number of Students: "); 
    scanf("%d", &num);

    FILE *fptr; // file declaraion
    
    // Open file and set it fptr, if exists else create it in this location.
    fptr = fopen("students.txt", "w"); 
    if(fptr == NULL) {
        printf("Error! cant find file."); // if file is not in location execute this.
        exit(1);
    } 
    
    // A for loop to go through the list of number of students given.
    for(i =0; i < num; i++) {
        printf("For student %d\t Enter name: ", i + 1);
        scanf("%s", name);

        printf("Enter Students Mark: ");
        scanf("%d", &marks);

        fprintf(fptr, "\nNames %s\tMarks: %d\t\n", name, marks); // displays students name and mark.
    }
    fclose(fptr); // closes file

return 0; // if program runs successfully
}