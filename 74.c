#include <stdio.h>
int main() {
    FILE *file;
    char filename[100];
    char ch;

    // Read the filename
    printf("Enter the filename to read: ");
    scanf("%s", filename);

    // Try to open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Read and display the content of the file
    printf("Content of %s:\n", filename);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}