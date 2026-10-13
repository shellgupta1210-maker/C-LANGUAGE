#include <stdio.h>

int main() {
    char str[100];
    // Array to track if a lowercase character has been seen before (initialized to 0/false)
    int seen[26] = {0}; 
    char repeated_char = '\0';

    // Read a string from the user (accepts spaces up to 99 characters)
    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    int i = 0;
    while (str[i] != '\0') {
        // Target only lowercase letters
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Map character to an array index from 0 to 25 (e.g., 'a' -> 0, 'b' -> 1)
            int index = str[i] - 'a';

            // If we have already seen this character, it's our first duplicate!
            if (seen[index] == 1) {
                repeated_char = str[i];
                break; // Exit early since we found the first repetition
            }

            // Mark this lowercase letter as seen
            seen[index] = 1;
        }
        i++;
    }

    // Print the final result
    if (repeated_char != '\0') {
        printf("The first repeating lowercase alphabet is: '%c'\n", repeated_char);
    } else {
        printf("No repeating lowercase alphabets found in the string.\n");
    }

    return 0;
}
