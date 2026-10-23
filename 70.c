#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[50];
    int age;

    // Open info.txt in write mode ("w")
    FILE *fptr = fopen("info.txt", "w");

    // Check if the file opened successfully
    if (fptr == NULL) {
        printf("Error: Could not open the file for writing.\n");
        return 1;
    }

    // Prompt the user for name and age
    printf("Enter your name: ");
    scanf("%49s", name); // Read a single-word string safely

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write name and age to the file using fprintf()
    fprintf(fptr, "Name: %s\nAge: %d\n", name, age);

    // Close the file
    fclose(fptr);

    // Display confirmation message to the console
    printf("Data was successfully saved to info.txt\n");

    return 0;
}
