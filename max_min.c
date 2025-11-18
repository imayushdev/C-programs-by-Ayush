// Author: Ayush
#include <stdio.h>

int main() {
    int a[100], n, min, max, i;

    // Input the size of the array
    printf("Enter size of the array: ");
    scanf("%d", &n);

    // Input elements of the array
    printf("Enter elements in array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Initialize min and max with first element
    min = a[0];
    max = a[0];

    // Traverse array to find min and max
    for(i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
        if(a[i] < min) {
            min = a[i];
        }
    }

    // Output the results
    printf("Minimum of array is: %d\n", min);
    printf("Maximum of array is: %d\n", max);

    return 0;
}
