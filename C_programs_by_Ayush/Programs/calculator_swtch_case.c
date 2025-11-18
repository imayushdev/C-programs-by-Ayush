// Program to perform basic arithmetic operations using switch-case
// Author: Ayush

#include <stdio.h>  // Header for input/output functions

int main() {
    int a, b, result;
    char op;

    // Asking user to enter the operator
    printf("Enter your operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // Note the space before %c to consume any leftover newline

    // Asking user to enter two integers
    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);

    // Switch-case for different operators
    switch (op) {
        case '+':
            result = a + b;
            printf("Addition of two numbers is %d\n", result);
            break;

        case '-':
            result = a - b;
            printf("Subtraction of two numbers is %d\n", result);
            break;

        case '*':
            result = a * b;
            printf("Multiplication of two numbers is %d\n", result);
            break;

        case '/':
            if (b != 0) {
                result = a / b;
                printf("Quotient of two numbers is %d\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case '%':
            if (b != 0) {
                result = a % b;
                printf("Remainder of two numbers is %d\n", result);
            } else {
                printf("Error: Modulo by zero is not allowed.\n");
            }
            break;

        default:
            printf("Wrong input. Please enter a valid operator.\n");
    }
    return 0;
}
