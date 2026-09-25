#include <stdio.h>
#include <stdbool.h>

int main() {
    char str[100];
    
    // Read a string from the user (accepts spaces up to 99 characters)
    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    // 1. Calculate the length of the string
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    // 2. Check for palindrome using two pointers
    int start = 0;
    int end = len - 1;
    bool isPalindrome = true;

    while (start < end) {
        // If characters at both ends don't match, it's not a palindrome
        if (str[start] != str[end]) {
            isPalindrome = false;
            break; // Exit the loop early
        }
        start++;
        end--;
    }

    // 3. Print the final result
    if (isPalindrome) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is NOT a palindrome.\n", str);
    }

    return 0;
}
