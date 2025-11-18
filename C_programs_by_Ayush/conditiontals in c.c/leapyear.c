#include <stdio.h>
int main () {
  int i ;  
    printf ("enter any year");
    scanf("%d",&i);
    if (i%4==0 && i%100==0 || i%400==0)
    {
      printf("%d is an leap year",i);
    }
    else 
     {printf("%d is not an leap year",i);
     }
    return 0;
}