#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int alphabet_counts[26] = {0}; // Frequency array for letters 'a' through 'z'

    // 1. Input the two strings
    printf("Enter the first string: ");
    scanf("%99[^\n]", str1);
    
    // Clean input buffer to clear the newline character
    while (getchar() != '\n');

    printf("Enter the second string: ");
    scanf("%99[^\n]", str2);

    // 2. Count frequencies from the first string
    int i = 0;
    while (str1[i] != '\0') {
        char ch = tolower(str1[i]);
        if (ch >= 'a' && ch <= 'z') {
            alphabet_counts[ch - 'a']++; // Increment count
        }
        i++;
    }

    // 3. Subtract frequencies based on the second string
    i = 0;
    while (str2[i] != '\0') {
        char ch = tolower(str2[i]);
        if (ch >= 'a' && ch <= 'z') {
            alphabet_counts[ch - 'a']--; // Decrement count
        }
        i++;
    }

    // 4. Check if the frequency array balances back to all zeros
    bool isAnagram = true;
    for (int j = 0; j < 26; j++) {
        if (alphabet_counts[j] != 0) {
            isAnagram = false;
            break; // Found a character mismatch balance
        }
    }

    // 5. Print the final result
    if (isAnagram) {
        printf("\nResult: The strings are anagrams.\n");
    } else {
        printf("\nResult: The strings are NOT anagrams.\n");
    }

    return 0;
}

