#include <stdio.h>
#include <stdlib.h>

// student Structure
struct student {
    char name[50];
    int age;
};
int main() {
    // Student struct variable 
    struct student stud1[5], stud2[5]; 
    FILE *fptr; // File pointer Declaration
    int i;
     // Open file if it exists else create it 'wb'.
    fptr = fopen("file.txt", "wb"); 
    for(i = 0; i < 5; i++) {
       // fflush(stdin);
        printf("Enter name: ");
        // use fgets() instead of gets().
        //fgets("%s", sizeof(stud1), stud1[i].name);
        scanf("%s", stud1[i].name);

        printf("Enter age: ");
        scanf("%d", &stud1[i].age);
    }

    fwrite(stud1, sizeof(stud1), 1, fptr);
    fclose(fptr);

    fptr = fopen("file.txt", "rb");
    fread(stud2, sizeof(stud2), 1, fptr);

    for(i = 0; i < 5; i++) {
        printf("\n\nName: %s\nAge: %d\n", stud2[i].name, stud2[i].age);
    }
    fclose(fptr);
return 0;
}
