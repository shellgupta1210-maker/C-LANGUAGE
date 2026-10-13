#include <stdio.h>
#include <stdlib.h>

int main() {
    long long num;
    int frequency[10] = {0}; // Array to store frequency of digits 0-9

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // Convert negative numbers to positive for digit analysis
    long long temp = llabs(num);

    // Handle the special case where input is exactly 0
    if (temp == 0) {
        frequency[0]++;
    }

    // Extract digits and update their frequencies
    while (temp > 0) {
        int digit = temp % 10;
        frequency[digit]++;
        temp /= 10;
    }

    // Find the digit with the highest frequency
    int max_digit = 0;
    int max_count = frequency[0];

    for (int i = 1; i < 10; i++) {
        if (frequency[i] > max_count) {
            max_count = frequency[i];
            max_digit = i;
        }
    }

    // Print the result
    printf("The digit that occurs the most is: %d (appears %d times)\n", max_digit, max_count);

    return 0;
}
