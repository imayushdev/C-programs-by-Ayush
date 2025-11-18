#include<stdio.h>
 int main () {
 int i ;
  printf("Enter an number");
 scanf("%d",&i) ;
 int r=0 , remainder;
while(i!=0){
     remainder=i%10;
     r=r*10+remainder;

printf("the reverse number is %d",r);
} 
return 0;
 }
 