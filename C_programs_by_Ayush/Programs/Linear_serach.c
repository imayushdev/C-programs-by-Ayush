// Author: Ayush
#include <stdio.h>

int main() {
    int a[100], n, i, x, flag = 0;

    // Input the number of elements in the array
    printf("Enter the number of elements in array:\n");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Input the number to search
    printf("Enter the number to search:\n");
    scanf("%d", &x);

    // Perform linear search
    for(i = 0; i < n; i++) {
        if(a[i] == x) {
            printf("%d is present at location %d.\n", x, i + 1);
            flag = 1;
            break;
        }
    }

    // If not found
    if(!flag) {
        printf("%d is not present in array.\n", x);
    }

    return 0;
}
