#include <stdio.h>
int main () {
 int  n;
 printf("Enter an Number");
scanf("%d",&n);
 int sum = 0;
 int lastdigit;
  while (n!=0){
  lastdigit=n%10;
  sum = sum + lastdigit;
  n=n/10;
  }
printf("The sum of digits is %d",sum);

    return 0;
}