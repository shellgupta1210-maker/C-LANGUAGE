#include <stdio.h>

int main() {
    int max_stars = 9; // Maximum number of stars in the middle row

    // 1. Upper Half (including the middle row): Prints 1, 3, 5, 7, 9 stars
    for (int i = 1; i <= max_stars; i += 2) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // 2. Lower Half: Prints 7, 5, 3, 1 stars
    for (int i = max_stars - 2; i >= 1; i -= 2) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
