#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[150];

    // Read full name from the user
    printf("Enter a full name: ");
    scanf("%149[^\n]", name);

    int len = strlen(name);

    // 1. Remove any trailing spaces at the end of the input
    while (len > 0 && name[len - 1] == ' ') {
        len--;
    }
    name[len] = '\0';

    // 2. Find the starting index of the last word (Surname) by scanning backward
    int surname_start = len - 1;
    while (surname_start > 0 && name[surname_start] != ' ') {
        surname_start--;
    }

    // If a space was found, move one index ahead to the start of the surname
    if (name[surname_start] == ' ') {
        surname_start++;
    }

    printf("Formatted Name: ");

    // 3. Loop forward to print initials for everything before the surname
    int i = 0;
    
    // Skip any leading spaces
    while (name[i] == ' ') {
        i++;
    }

    // Print the first initial if it belongs to a first name (before the surname)
    if (i < surname_start - 1 && name[i] != '\0') {
        printf("%c. ", toupper(name[i]));
        i++;
    }

    // Print middle initials by looking for spaces before the surname
    while (i < surname_start - 1) {
        if (name[i] == ' ' && name[i + 1] != ' ' && (i + 1) < surname_start - 1) {
            printf("%c. ", toupper(name[i + 1]));
        }
        i++;
    }

    // 4. Print the final surname in full uppercase
    for (int k = surname_start; name[k] != '\0'; k++) {
        printf("%c", toupper(name[k]));
    }
    printf("\n");

    return 0;
}

