// Author: Ayush
#include <stdio.h>

int main() {
    int ar1[10], ar2[10], sum[10], i;

    // Input elements of the first array
    printf("Enter first array:\n");
    for(i = 0; i < 10; i++) {
        printf("ar1[%d] = ", i);
        scanf("%d", &ar1[i]);
    }

    // Input elements of the second array
    printf("Enter second array:\n");
    for(i = 0; i < 10; i++) {
        printf("ar2[%d] = ", i);
        scanf("%d", &ar2[i]);
    }

    // Add corresponding elements and store in sum[]
    printf("Sum of arrays:\n");
    for(i = 0; i < 10; i++) {
        sum[i] = ar1[i] + ar2[i];
        printf("sum[%d] = %d\n", i, sum[i]);
    }

    return 0;
}
