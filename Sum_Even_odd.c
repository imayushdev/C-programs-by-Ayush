#include <stdio.h>

int main(){
    int n,i,even=0,odd=0; // Variables for input, loop, and sums of even/odd

    printf("Enter the value of num: "); // Ask for input
    scanf("%d",&n); // Read the number

    for(i=0; i<=n; i++) // Loop from 0 to n
    {
        if(i%2==0) // Check if number is even
            even = even + i; // Add to even sum
        else
            odd = odd + i; // Add to odd sum
    }

    printf("\nSum of all odd numbers = %d", odd); // Print odd sum
    printf("\nSum of all even numbers = %d\n", even); // Print even sum
    return 0; // End
}
