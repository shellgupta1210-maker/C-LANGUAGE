#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    float principal, rate, time, si, ci;

    // 1. Take inputs from the user
    printf("Enter the Principal amount: ");
    scanf("%f", &principal);

    printf("Enter the Annual Interest Rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter the Time period (in years): ");
    scanf("%f", &time);

    // 2. Calculate Simple Interest
    // Formula: SI = (P * R * T) / 100
    si = (principal * rate * time) / 100;

    // 3. Calculate Compound Interest
    // Formula: CI = P * (1 + R/100)^T - P
    ci = principal * pow((1 + rate / 100), time) - principal;

    // 4. Display the calculated results
    printf("\n--- Interest Calculation Results ---\n");
    printf("Principal Amount : $%.2f\n", principal);
    printf("Interest Rate    : %.2f%%\n", rate);
    printf("Time Period      : %.2f years\n", time);
    printf("------------------------------------\n");
    printf("Simple Interest  : $%.2f\n", si);
    printf("Compound Interest: $%.2f\n", ci);
    printf("------------------------------------\n");

    return 0;
}
