// Author: Ayush
// Program to calculate Simple Interest and Compound Interest

#include <stdio.h>
#include <math.h>  // for using pow() function

int main() {
    float p, r, t, si, ci, amount;

    // taking input from user
    printf("Enter principal amount: ");
    scanf("%f", &p);

    printf("Enter rate of interest: ");
    scanf("%f", &r);

    printf("Enter time in years: ");
    scanf("%f", &t);

    // calculating simple interest
    si = (p * r * t) / 100;

    // calculating compound interest
    amount = p * pow((1 + r / 100), t);
    ci = amount - p;

    // printing result
    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}
