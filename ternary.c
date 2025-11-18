#include <stdio.h>
int main () {
int n;
printf("Enter a number");
scanf("%d",&n);
//ternary operator
// exp1? exp2: expression 3
n%2==0  ? printf("even no") : printf("odd number");
    return 0;
}