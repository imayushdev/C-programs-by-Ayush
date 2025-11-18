// Program to find average of n numbers
// Author: Ayush

#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0, average;

    // asking user how many numbers
    printf("Enter total numbers: ");
    scanf("%d", &n);

    // loop to input and add numbers
    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num; // adding to sum
    }

    // calculating average
    average = sum / n;

    // showing result
    printf("Average = %.2f\n", average);

    return 0;
}