#include <stdio.h>
#include <ctype.h> // Needed for tolower()

int main() {
    char str[100];

    // Read a string from the user (accepts spaces up to 99 characters)
    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    int i = 0; // Reading pointer
    int j = 0; // Writing pointer

    while (str[i] != '\0') {
        // Convert character to lowercase to simplify vowel checking
        char ch = tolower(str[i]);

        // Check if the character is NOT a vowel
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            str[j] = str[i]; // Write the non-vowel character to the current 'j' index
            j++;             // Move the writing pointer forward
        }
        i++; // Always move the reading pointer forward
    }

    // Explicitly add the null terminator at the end of the new string boundary
    str[j] = '\0';

    // Print the modified string
    printf("String after removing vowels: %s\n", str);

    return 0;
}
