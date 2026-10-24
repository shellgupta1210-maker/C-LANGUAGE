#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 256

int main() {
    FILE *file;
    char line[MAX_LINE_LENGTH];

    // Open the existing file in read-only mode
    file = fopen("example.txt", "r");

    // Check if the file exists and opened successfully
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Read and print the file line by line until the end of the file (EOF)
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    // Close the file to free up system resources
    fclose(file);

    return EXIT_SUCCESS;
}
