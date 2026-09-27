#include <stdio.h>

int main() {
    char str[100];
    char search_ch;
    int count = 0;

    // 1. Read the string from the user
    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    // Clean the input buffer before reading the search character
    // This removes the leftover newline character ('\n') from the previous scanf
    while (getchar() != '\n');

    // 2. Read the character to search for
    printf("Enter the character to find its frequency: ");
    scanf("%c", &search_ch);

    // 3. Traverse the string to match characters
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == search_ch) {
            count++; // Increment counter on finding a match
        }
        i++;
    }

    // 4. Print the result
    printf("The character '%c' occurs %d times in the string.\n", search_ch, count);

    return 0;
}
