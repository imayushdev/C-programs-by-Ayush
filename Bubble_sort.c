// Author: Ayush
#include <stdio.h>

int main() {
    int a[5], temp;

    // Input array elements
    for(int i = 0; i < 5; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Print the unsorted array
    printf("Unsorted array:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    // Bubble sort algorithm
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4 - i; j++) {
            if(a[j] > a[j + 1]) {
                // Swap a[j] and a[j+1]
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("\nSorted array:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
