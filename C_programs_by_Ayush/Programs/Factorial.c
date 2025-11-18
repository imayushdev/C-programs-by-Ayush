#include<stdio.h>

int main()
{
    int n,i,fact=1; // Declare variables: n for input, i for loop, fact to store result

    printf("Enter an integer: "); // Ask user for input
    scanf("%d",&n); // Read the number

    if(n < 1) // Check if number is less than 1
    {
        printf("Error! Factorial of a negative number doesn't exist.");
        return 0; // Exit if input is invalid
    }
    else
    {
        for(i=1; i<=n; i++) // Loop from 1 to n
        {
            fact = fact * i; // Multiply fact by i in each step
        }
    }

    printf("Factorial of %d = %d", n, fact); // Show the result
    return 0; // End program
}
