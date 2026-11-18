//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        perror("Error opening numbers.txt");
        return 1;
    }

    int num;
    long long sum = 0; // Use long long to prevent overflow on large lists
    int count = 0;

    // fscanf skips whitespace (spaces, tabs, newlines) automatically
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(file);

    if (count > 0) {
        double average = (double)sum / count;
        printf("Sum: %lld\n", sum);
        printf("Average: %.2f\n", average);
    } else {
        printf("The file is empty or contains no valid integers.\n");
    }

    return 0;
}
