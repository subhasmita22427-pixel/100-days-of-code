#include<stdio.h>
int main ()
{
int a;
printf("enter the integer value of a:");
scanf("%d",&a);
if(a>0)
{printf("a is positive");}
else if(a<0)
{printf("a is negative");}
else
{printf("a is zero");}
return 0;
}
