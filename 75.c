#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    int ch;

    // Open the source file for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input.txt");
        return EXIT_FAILURE;
    }

    // Open the target file for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Error creating output.txt");
        fclose(inputFile); // Clean up already opened resource
        return EXIT_FAILURE;
    }

    // Read character by character until the end of the file
    while ((ch = fgetc(inputFile)) != EOF) {
        // Convert to uppercase if lowercase, otherwise keep as is
        fputc(toupper(ch), outputFile);
    }

    // Close both files to release resources
    fclose(inputFile);
    fclose(outputFile);

    printf("File processing completed successfully.\n");
    return EXIT_SUCCESS;
}
