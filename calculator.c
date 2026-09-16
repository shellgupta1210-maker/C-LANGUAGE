#include <stdio.h>

int main() {
    char operator;
    int num1, num2;
    int result;

    // Prompt user for the operator
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    // Prompt user for two integer operands
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;

        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %d / %d = %d\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        case '%':
            // Check for modulo by zero
            if (num2 != 0) {
                result = num1 % num2;
                printf("Result: %d %% %d = %d\n", num1, num2, result);
            } else {
                printf("Error! Modulo by zero is not allowed.\n");
            }
            break;

        // Handling invalid operators
        default:
            printf("Error! Invalid operator standard.\n");
            break;
    }

    return 0;
}
