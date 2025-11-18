// Program to calculate percentage based on user-defined number of subjects
// Author: Ayush

#include <stdio.h>

int main() {
    int n, i; // n = number of subjects, i = loop counter
    float mark, total = 0, percentage;

    // Ask user for number of subjects
    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    // Loop to take marks input one by one
    for(i = 1; i <= n; i++) {
        printf("Enter marks for subject %d: ", i);
        scanf("%f", &mark);
        total += mark; // Add mark to total
    }

    // Calculate percentage
    percentage = (total / (n * 100)) * 100;

    // Display results
    printf("\nTotal Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
