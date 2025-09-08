#include<stdio.h>
int main ()
{
float si,r,p,t,ci;
printf("Enter the value of p,r,t");
scanf("%f%f%f",&p,&r,&t);
si=(p*r*t)/100;
printf("The simple interest is %f",si);
ci=p*(1+r/100)*(1+r/100)-p;
printf("\nThe compound interest is %f",ci);
return 0;
}
