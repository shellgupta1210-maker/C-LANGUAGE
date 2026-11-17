//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];
    int ch;
    int vowels = 0, consonants = 0;

    // Ask the user for the file path
    printf("Enter the file name: ");
    scanf("%99s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Read the file character by character until End of File (EOF)
    while ((ch = fgetc(file)) != EOF) {
        // Check if the character is an alphabet letter (ignores digits, spaces, and symbols)
        if (isalpha(ch)) {
            // Convert to lowercase to simplify vowel checking
            char lower = tolower(ch);

            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Close the file and display the counts
    fclose(file);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
