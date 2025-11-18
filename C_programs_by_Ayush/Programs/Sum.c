#include<stdio.h>

int main()
{
    int n,i,sum=0; // Declare variables: n for input, i for loop, sum to store total

    printf("Enter a number: "); // Ask user for input
    scanf("%d",&n); // Read the number from user

    for(i=0; i<=n; i++) // Loop from 0 to n
    {
        sum = sum + i; // Add each number to sum
    }

    printf("\nSum of all the numbers up to given no. is %d", sum); // Display the result
    return 0; // End of program
}
