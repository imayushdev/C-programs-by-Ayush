// Author: Ayush
#include <stdio.h>

int main() {
    int a[100], n, i, sum = 0;

    // Input array size
    printf("Enter array size:\n");
    scanf("%d", &n);

    // Input array elements
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Calculate sum of array elements
    for(i = 0; i < n; i++) {
        sum = sum + a[i];
    }

    // Output the sum
    printf("Sum of the array = %d\n", sum);

    return 0;
}
