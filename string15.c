#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str1[100], str2[100];
    char temp[200] = ""; // Large enough to hold str1 concatenated with itself

    // 1. Input the two strings
    printf("Enter the first string: ");
    scanf("%99[^\n]", str1);
    
    // Clean input buffer to clear the newline character
    while (getchar() != '\n');

    printf("Enter the second string: ");
    scanf("%99[^\n]", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    bool isRotation = false;

    // 2. Structural Check: They must be of the same length and not empty
    if (len1 == len2 && len1 > 0) {
        // Concatenate str1 with itself into temp (e.g., "abc" becomes "abcabc")
        strcpy(temp, str1);
        strcat(temp, str1);

        // Check if str2 exists as a substring inside temp using strstr()
        if (strstr(temp, str2) != NULL) {
            isRotation = true;
        }
    }

    // 3. Print the final result
    if (isRotation) {
        printf("\nResult: \"%s\" IS a rotation of \"%s\"\n", str2, str1);
    } else {
        printf("\nResult: \"%s\" is NOT a rotation of \"%s\"\n", str2, str1);
    }

    return 0;
}
