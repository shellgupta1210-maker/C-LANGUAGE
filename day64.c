#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[500];
    char longestWord[100] = "";
    char currentWord[100];
    
    int longestLength = 0;
    int currentLength = 0;
    int i = 0, j = 0;

    printf("Enter a string: ");
    // Reads a full line of text including spaces until a newline is hit
    fgets(sentence, sizeof(sentence), stdin);

    // Remove trailing newline character added by fgets if present
    sentence[strcspn(sentence, "\n")] = '\0';

    while (1) {
        // Check if character is part of a word (alphanumeric)
        if (isalnum(sentence[i])) {
            currentWord[j++] = sentence[i];
            currentLength++;
        } 
        // If it's a delimiter (space, punctuation, or end of string)
        else {
            if (currentLength > 0) {
                currentWord[j] = '\0'; // Null-terminate current word

                // If current word is longer than the previous maximum
                if (currentLength > longestLength) {
                    longestLength = currentLength;
                    strcpy(longestWord, currentWord);
                }
                
                // Reset variables for the next word
                j = 0;
                currentLength = 0;
            }
        }

        // Break loop when reaching the end of the input string
        if (sentence[i] == '\0') {
            break;
        }
        i++;
    }

    // Print the final result
    if (longestLength > 0) {
        printf("\nThe longest word is: \"%s\"\n", longestWord);
        printf("Length of the longest word: %d\n", longestLength);
    } else {
        printf("\nNo valid words found.\n");
    }

    return 0;
}
