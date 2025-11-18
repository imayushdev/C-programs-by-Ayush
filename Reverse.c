// Author: Ayush
#include <stdio.h>

int main() {
    int n, rev = 0, i;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Reverse the number
    while(n > 0) {
        i = n % 10;         // Get last digit
        rev = rev * 10 + i; // Add digit to reversed number
        n = n / 10;         // Remove last digit
    }

    // Output the reversed number
    printf("Reversed Number: %d\n", rev);

    return 0;
}
