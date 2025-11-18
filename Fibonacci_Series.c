#include<stdio.h>

void main()
{
    int n,f1=0,f2=1,f3,i; // f1 and f2 are first two Fibonacci numbers

    printf("Enter the number of terms: "); // Ask how many terms to print
    scanf("%d",&n); // Read the number of terms

    printf("Fibonacci Series: %d %d ", f1, f2); // Print first two terms

    for(i=1; i<=n-2; i++) // Loop for remaining terms
    {
        f3 = f1 + f2; // Next term is sum of previous two
        printf("%d ", f3); // Print next term
        f1 = f2; // Update f1
        f2 = f3; // Update f2
    }
}