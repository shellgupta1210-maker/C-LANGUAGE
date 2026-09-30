#include <stdio.h>

// Helper function to reverse a specific segment of a string in-place
void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[250];

    // Read a full sentence from the user
    printf("Enter a sentence: ");
    scanf("%249[^\n]", sentence);

    int i = 0;
    int word_start = 0;

    // Traverse the sentence character by character
    while (sentence[i] != '\0') {
        // If we hit a space, it marks the end of the current word
        if (sentence[i] == ' ') {
            reverseWord(sentence, word_start, i - 1);
            word_start = i + 1; // The next word starts after the space
        }
        i++;
    }

    // Reverse the very last word of the sentence (since it ends with '\0' instead of a space)
    reverseWord(sentence, word_start, i - 1);

    // Print the final modified sentence
    printf("Modified sentence: %s\n", sentence);

    return 0;
}
