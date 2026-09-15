#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    // Prompt user for input
    printf("Enter time in seconds: ");
    if (scanf("%d", &total_seconds) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // 1 hour = 3600 seconds (60 minutes * 60 seconds)
    hours = total_seconds / 3600;
    
    // Get the remaining seconds after extracting hours, then divide by 60 for minutes
    minutes = (total_seconds % 3600) / 60;
    
    // The remaining seconds are the remainder of total seconds divided by 60
    seconds = total_seconds % 60;

    // Print the output in HH:MM:SS format with leading zeros for single digits
    printf("Converted format [HH:MM:SS]: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
