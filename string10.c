#include <stdio.h>

int main() {
    char str[100];

    // Read a string from the user (accepts spaces up to 99 characters)
    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    int i = 0;
    // Loop through the string until the null character '\0' is hit
    while (str[i] != '\0') {
        // If the character is uppercase, convert it to lowercase
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // Adding 32 converts it to lowercase
        }
        // If the character is lowercase, convert it to uppercase
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Subtracting 32 converts it to uppercase
        }
        
        i++;
    }

    // Print the modified string
    printf("Toggled case string: %s\n", str);

    return 0;
}
