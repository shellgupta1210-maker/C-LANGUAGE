#include <stdio.h>

// Function declaration using pointers to handle the operations
void calculateDigitSum(int *numPtr, int *digitPtr, int *sumPtr) {
    // If the input number is negative, make it positive for digit isolation
    if (*numPtr < 0) {
        *numPtr = -(*numPtr);
    }

    // Process the number until it becomes 0
    while (*numPtr > 0) {
        *digitPtr = *numPtr % 10;  // Extract the last digit
        *sumPtr += *digitPtr;      // Add the digit to the total sum
        *numPtr /= 10;             // Remove the last digit from the number
    }
}

int main() {
    int number, digit = 0, sum = 0;

    // Prompt user for input
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Store a copy of the original number for the final print statement
    int originalNumber = number;

    // Pass the addresses of the variables to the function
    calculateDigitSum(&number, &digit, &sum);

    // Display the results
    printf("The sum of the digits of %d is: %d\n", originalNumber, sum);

    return 0;
}
