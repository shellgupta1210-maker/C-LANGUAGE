#include <stdio.h>
#include <ctype.h>

int main() {
    char name[150];

    // Read full name from the user (accepts spaces)
    printf("Enter a full name: ");
    scanf("%149[^\n]", name);

    printf("Initials: ");

    int i = 0;
    // Skip any leading spaces if the user accidentally typed them
    while (name[i] == ' ') {
        i++;
    }

    // Print the very first character of the name (converted to uppercase)
    if (name[i] != '\0') {
        printf("%c ", toupper(name[i]));
        i++;
    }

    // Traverse the rest of the string
    while (name[i] != '\0') {
        // If the current character is a space, the next non-space character is an initial
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c ", toupper(name[i + 1]));
        }
        i++;
    }
    printf("\n");

    return 0;
}
