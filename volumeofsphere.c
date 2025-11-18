//Author: Ayush
//Program to find volume of Sphere.
#include <stdio.h>
int main() 
 {
    float r,v;
    printf("Enter the Radius");  //Radius Input from user
    scanf("%f",&r);
    v=(4/3)*(3.14*r*r*r);  //calculating volume
    printf("The volume is=%f",v);
    return 0;
 }
