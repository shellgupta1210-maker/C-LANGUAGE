#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    // Read a string from the user (accepts spaces up to 99 characters)
    printf("Enter a string: ");
    // [^\n] tells scanf to read everything until a newline character is pressed
    scanf("%99[^\n]", str);

    // Loop until the pointer encounters the Null Character '\0'
    while (str[count] != '\0') {
        count++; // Increment count for each valid character
    }

    // Print the total character count
    printf("Total number of characters: %d\n", count);

    return 0;
