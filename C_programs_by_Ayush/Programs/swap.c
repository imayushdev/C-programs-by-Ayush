// Author: Ayush
// Program to swap two numbers using a third (temporary) variable

#include <stdio.h>

int main() {
    int a, b, temp;

    // getting input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // showing values before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // swapping logic using temp variable
    temp = a;
    a = b;
    b = temp;

    // showing values after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
