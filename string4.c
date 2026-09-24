#include <stdio.h>

int main() {
    char str[100];

    // Read a string from the user (accepts spaces up to 99 characters)
    printf("Enter a lowercase string: ");
    scanf("%99[^\n]", str);

    int i = 0;
    while (str[i] != '\0') {
        // Check if the current character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Subtract 32 from its ASCII value to convert it to uppercase
            str[i] = str[i] - 32;
        }
        i++;
    }

    // Print the converted uppercase string
    printf("Uppercase string: %s\n", str);

    return 0;
}
