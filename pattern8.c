#include <stdio.h>

int main() {
    // Array containing the number of stars for each row/block
    int pattern[] = {1, 3, 5, 3, 1};
    int total_blocks = 5;

    // Loop through each block configuration
    for (int i = 0; i < total_blocks; i++) {
        int stars_count = pattern[i];
        
        // Loop to print the vertical stack of stars for the current block
        for (int j = 0; j < stars_count; j++) {
            printf("*\n");
        }
        
        // Print a blank newline between blocks (except after the last block)
        if (i < total_blocks - 1) {
            printf("\n");
        }
    }

    return 0;
}

