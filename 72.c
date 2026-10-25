#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define OUT 0
#define IN  1

int main() {
    // Open the file in read-only mode
    FILE *file = fopen("sample.txt", "r");
    
    // Check if the file exists and opened successfully
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return EXIT_FAILURE;
    }

    int ch;
    unsigned long long characters = 0;
    unsigned long long words = 0;
    unsigned long long lines = 0;
    int state = OUT;
    int last_ch = '\n'; // Tracks the previous character to handle files not ending in \n

    // Read the file character by character until EOF
    while ((ch = fgetc(file)) != EOF) {
        characters++;

        // Count lines based on newline characters
        if (ch == '\n') {
            lines++;
        }

        // Check if the character is a space, tab, or newline
        if (isspace(ch)) {
            state = OUT;
        } 
        // If the character is not a space and we were outside a word, a new word starts
        else if (state == OUT) {
            state = IN;
            words++;
        }

        last_ch = ch;
    }

    // If the file is not empty and doesn't end with a newline, count the final line
    if (characters > 0 && last_ch != '\n') {
        lines++;
    }

    // Close the file stream
    fclose(file);

    // Print the final tallies
    printf("Total Characters: %llu\n", characters);
    printf("Total Words:      %llu\n", words);
    printf("Total Lines:      %llu\n", lines);

    return EXIT_SUCCESS;
}
