#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Read a string from the user (accepts spaces up to 99 characters)
    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    printf("\nCharacters on new lines:\n");
    // Loop through the array until the null character '\0' is hit
    while (str[i] != '\0') {
        printf("%c\n", str[i]); // Print the character followed by a newline
        i++;
    }

    return 0;
}
