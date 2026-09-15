#include <stdio.h>

int main() {
    double side1, side2, side3;

    // Prompt the user for the three sides of the triangle
    printf("Enter the lengths of the three sides of the triangle:\n");
    if (scanf("%lf %lf %lf", &side1, &side2, &side3) != 3) {
        printf("Error: Please enter valid numerical values.\n");
        return 1;
    }

    // Step 1: Validate if the sides can form a triangle
    // The sum of any two sides must be greater than the third side.
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        
        // Step 2: Classify the triangle based on its sides
        if (side1 == side2 && side2 == side3) {
            // All three sides are equal
            printf("The triangle is Equilateral.\n");
        } 
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
            // Any two sides are equal
            printf("The triangle is Isosceles.\n");
        } 
        else {
            // No sides are equal
            printf("The triangle is Scalene.\n");
        }
        
    } else {
        // The sides violate the geometric rules of a triangle
        printf("Error: The given side lengths cannot form a valid triangle.\n");
    }

    return 0;
}
