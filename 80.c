#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fptr;
    struct Student s;
    int n, i;

    // 1. Open file in write mode ("w")
    fptr = fopen("students.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // 2. Write records to the file using fprintf()
    for (i = 0; i < n; i++) {
        printf("\n--- Enter details for Student %d ---\n", i + 1);
        printf("First Name (no spaces): ");
        scanf("%49s", s.name);
        printf("Roll Number: ");
        scanf("%d", &s.roll);
        printf("Marks: ");
        scanf("%f", &s.marks);

        // Write formatted data to file
        fprintf(fptr, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fptr);
    printf("\nRecords successfully saved to students.txt.\n");

    // 3. Reopen the file in read mode ("r")
    fptr = fopen("students.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    // 4. Read records using fscanf() and display them
    printf("\n--- Reading Student Records from File ---\n");
    printf("%-15s %-12s %-10s\n", "Name", "Roll No", "Marks");
    printf("---------------------------------------\n");

    // fscanf returns the number of items successfully matched and assigned (3 here)
    while (fscanf(fptr, "%49s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("%-15s %-12d %-10.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fptr);
    return 0;
}
