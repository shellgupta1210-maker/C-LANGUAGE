#include <stdio.h>

int main() {
    int days_late;
    int fine = 0;

    // Prompt the user for the number of overdue days
    printf("Enter the number of days the book is late: ");
    if (scanf("%d", &days_late) != 1) {
        printf("Invalid input. Please enter a valid number of days.\n");
        return 1;
    }

    // Determine fine tier using if-else structure
    if (days_late <= 0) {
        printf("The book was returned on time. No fine.\n");
    } 
    else if (days_late > 30) {
        printf("Days late: %d\n", days_late);
        printf("Status: Membership Cancelled!\n");
    } 
    else {
        // Calculate progressive fine
        if (days_late <= 5) {
            fine = days_late * 2;
        } 
        else if (days_late <= 10) {
            // First 5 days @ Rs 2 + remaining days @ Rs 4
            fine = (5 * 2) + ((days_late - 5) * 4);
        } 
        else { // remaining case: days_late is between 11 and 30
            // First 5 days @ Rs 2 + next 5 days @ Rs 4 + remaining days @ Rs 6
            fine = (5 * 2) + (5 * 4) + ((days_late - 10) * 6);
        }

        // Display the results
        printf("\n--- Library Fine Details ---\n");
        printf("Total Days Late: %d\n", days_late);
        printf("Total Fine Amount: Rs. %d\n", fine);
    }

    return 0;
}
