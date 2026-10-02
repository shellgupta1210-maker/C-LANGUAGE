#include <stdio.h>

int main() {
    char input_date[20];
    char output_date[20];
    int day, year;

    // Read the date from the user
    printf("Enter date in dd/04/yyyy format: ");
    scanf("%19s", input_date);

    // Parse the day and year while ensuring the middle month is exactly 04
    // sscanf returns the number of successfully matched items (should be 2)
    if (sscanf(input_date, "%d/04/%d", &day, &year) == 2) {
        
        // Reconstruct the date string into the new format
        // %02d ensures the day keeps a leading zero if it is a single digit (e.g., 05)
        sprintf(output_date, "%02d-Apr-%d", day, year);
        
        // Print the final result
        printf("Formatted date: %s\n", output_date);
        
    } else {
        printf("Invalid format! Please make sure the input matches dd/04/yyyy exactly.\n");
    }

    return 0;
}
