#include <stdio.h>

int main() {
    char str[100];
    int spaces = 0, digits = 0, alphabets = 0, special_chars = 0;

    // Read a string from the user (accepts spaces up to 99 characters)
    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    int i = 0;
    while (str[i] != '\0') {
        char ch = str[i];

        // Check for spaces
        if (ch == ' ') {
            spaces++;
        }
        // Check for digits (0-9)
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        // Check for alphabets (a-z or A-Z)
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            alphabets++;
        }
        // If it's none of the above, it's a special character
        else {
            special_chars++;
        }
        
        i++;
    }

    // Printing the final counts
    printf("\nTotal Spaces: %d\n", spaces);
    printf("Total Digits: %d\n", digits);
    printf("Total Alphabets: %d\n", alphabets);
    printf("Total Special Characters: %d\n", special_chars);

    return 0;
}
