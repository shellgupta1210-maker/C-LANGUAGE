#include <stdio.h>
#include <string.h>

int main() {
    char sentence[250];
    char longest_word[150] = "";
    int max_len = 0;

    // Read a full sentence from the user
    printf("Enter a sentence: ");
    scanf("%249[^\n]", sentence);

    // Split the sentence into individual tokens using space as the delimiter
    char *word = strtok(sentence, " ");

    // Walk through each token/word in the sentence
    while (word != NULL) {
        int current_len = strlen(word);

        // If the current word is longer than the previous maximum, update trackers
        if (current_len > max_len) {
            max_len = current_len;
            strcpy(longest_word, word);
        }

        // Move to the next token
        word = strtok(NULL, " ");
    }

    // Print the final result
    if (max_len > 0) {
        printf("\nThe longest word is: \"%s\" (Length: %d characters)\n", longest_word, max_len);
    } else {
        printf("\nNo valid words found.\n");
    }

    return 0;
}
