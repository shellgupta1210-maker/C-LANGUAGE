#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Read a string from the user
    printf("Enter a string: ");
    scanf("%99s", str);

    int len = strlen(str);

    printf("\nAll sub-strings are:\n");

    // Outer loop selects the starting character position
    for (int start = 0; start < len; start++) {
        
        // Middle loop selects the ending character position
        for (int end = start; end < len; end++) {
            
            // Inner loop prints characters from 'start' to 'end'
            for (int k = start; k <= end; k++) {
                printf("%c", str[k]);
            }
            
            printf("\n"); // Move to the next line after printing one sub-string
        }
    }

    return 0;
}
