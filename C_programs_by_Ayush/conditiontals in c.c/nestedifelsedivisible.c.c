#include <stdio.h>
int main () {
int n;
printf ("Enter a number");
scanf ("%d", &n);  
if (n%5==0) {
    if(n%3==0){
 printf("the number is divisible by both 5 and 3");
}
 else {
       printf ("The number is not divisible");
 }
}
else{
   printf("The number is not divisible");
}


return 0;
}