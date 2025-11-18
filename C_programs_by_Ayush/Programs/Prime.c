// Author: Ayush
#include <stdio.h>

int main() {
    int n, i, flag = 0;

    // Input a positive number
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check for factors
    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            flag = 1; // Not prime
            break;
        }
    }

    // Output result
    if(flag == 1) {
        printf("%d is not a prime number.\n", n);
    } else {
        printf("%d is a prime number.\n", n);
    }

    return 0;
}
