#include <stdio.h>
#include <ctype.h> // Needed for tolower()

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    // Read a string from the user (accepts spaces up to 99 characters)
    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    int i = 0;
    while (str[i] != '\0') {
        // Convert character to lowercase to simplify the condition check
        char ch = tolower(str[i]);

        // Check if the character is an alphabet letter
        if (ch >= 'a' && ch <= 'z') {
            // Check if it matches any vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++; // It's an alphabet but not a vowel, so it's a consonant
            }
        }
        i++;
    }

    // Printing the final counts
    printf("\nTotal Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);

    return 0;
}

