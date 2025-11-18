/*
    Swap Two Elements Using Pointers
    Author: Ayush
*/

#include <stdio.h>

// Function to swap values pointed by x and y
void swap(int *x, int *y)
{
    int temp = *x;    // Store the value at x in temp
    *x = *y;          // Assign the value at y to x
    *y = temp;        // Assign temp (original x) to y

    // Shows swapped values inside the function (for demonstration)
    printf("After swapping values in function a = %d, b = %d\n", *x, *y);
}

int main(void)
{
    int a, b;

    // Input values for a and b
    scanf("%d", &a);
    scanf("%d", &b);

    // Show values before swapping
    printf("Before swapping the values in main a = %d, b = %d\n", a, b);

    // Call swap, passing addresses of a and b
    swap(&a, &b);

    // Show values after swapping
    printf("After swapping values in main a = %d, b = %d\n", a, b);

    return 0;
}
