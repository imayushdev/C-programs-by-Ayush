// Program to perform matrix addition and multiplication
// Author: Ayush

#include <stdio.h>

void main()
{
    // Declaring matrices and variables
    int a[5][5], b[5][5], c[5][5];
    int r1, c1, r2, c2, i, j, k, sum = 0;

    // Taking input for first matrix dimensions
    printf("For 1st Matrix\nEnter no of rows:");
    scanf("%d", &r1);
    printf("Enter no of columns:");
    scanf("%d", &c1);

    // Taking input for second matrix dimensions
    printf("For 2nd Matrix\nEnter no of rows:");
    scanf("%d", &r2);
    printf("Enter no of columns:");
    scanf("%d", &c2);

    // Taking input for first matrix elements
    printf("Enter elements of 1st matrix");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Taking input for second matrix elements
    printf("Enter elements of 2nd matrix");
    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Checking condition for addition
    if(r1 == r2 && c1 == c2)
    {
        // Performing addition
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c1; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }

        // Displaying addition result
        printf("Addition:\n");
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c1; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Addition not possible\n");

    // Checking condition for multiplication
    if(c1 == r2)
    {
        // Performing multiplication
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
                for(k = 0; k < c1; k++)
                {
                    sum = sum + a[i][k] * b[k][j];
                }
                c[i][j] = sum;
                sum = 0;  // Reset sum for next element
            }
        }

        // Displaying multiplication result
        printf("Multiplication:\n");
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
}
