#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_SIZE 100000 // Maximum length for the input strings

// Function to check if two strings are anagrams
bool isAnagram(char* s, char* t) {
    int len_s = strlen(s);
    int len_t = strlen(t);

    // If lengths are not equal, they cannot be anagrams
    if (len_s != len_t) {
        return false;
    }

    // Frequency array for 26 lowercase English alphabets
    int count[26] = {0};

    // Count frequencies of characters in string s
    for (int i = 0; i < len_s; i++) {
        count[s[i] - 'a']++;
    }

    // Decrement frequencies of characters based on string t
    for (int i = 0; i < len_t; i++) {
        count[t[i] - 'a']--;
    }

    // If any element in count array is not zero, they are not anagrams
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char s[MAX_SIZE];
    char t[MAX_SIZE];

    // Reading inputs from the user
    printf("Enter first string (s): ");
    scanf("%s", s);

    printf("Enter second string (t): ");
    scanf("%s", t);

    // Checking and printing the result
    if (isAnagram(s, t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}
