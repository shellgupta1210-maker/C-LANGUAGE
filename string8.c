#include <stdio.h>

int main() {
    char str[100];

    // Read a string from the user (accepts spaces up to 99 characters)
    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    int i = 0;
    // Loop through the string until the null character '\0' is hit
    while (str[i] != '\0') {
        // If a space is found, replace it with a hyphen
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }

    // Print the modified string
    printf("Modified string: %s\n", str);

    return 0;
}

