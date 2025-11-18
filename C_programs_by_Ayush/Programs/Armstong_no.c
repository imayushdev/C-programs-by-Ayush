/*
    Armstrong Numbers from 1 to n
    Author: Ayush
*/

#include <stdio.h>
#include <math.h>

void main()
{
    int num, n, t, rem, sum, c;

    // Uncomment the line below if you want to prompt the user:
    // printf("Enter range: ");
    scanf("%d", &n);  // User enters the upper limit

    printf("All Armstrong numbers between 1 and %d are:\n", n);

    // Loop over all numbers from 1 to n
    for(num = 1; num <= n; num++)
    {
        t = num;
        c = 0;

        // Count number of digits in the current number
        while(t > 0)
        {
            t = t / 10;
            c++;
        }

        t = num;
        sum = 0;

        // Find the sum of digits raised to the power of number of digits
        while(t > 0)
        {
            rem = t % 10;
            sum = sum + pow(rem, c);
            t = t / 10;
        }

        // If sum is equal to the original number, print it
        if(sum == num)
            printf("%d\n", num);
    }
}
