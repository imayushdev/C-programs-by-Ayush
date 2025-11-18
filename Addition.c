// Program to add two numbers
// Author: Ayush

#include <stdio.h>

int main() {
    int num1, num2, sum;

    // asking user to enter two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // adding both numbers
    sum = num1 + num2;

    // displaying result
    printf("Sum is: %d\n", sum);

    return 0;
}
