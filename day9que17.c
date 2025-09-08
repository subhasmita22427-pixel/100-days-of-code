#include<stdio.h>
int main ()
{
int a,b,c,roots;
printf(" enter a quadratic equation in the form ax^2 + bx + c = 0 \n");
scanf("%d%d%d",&a,&b,&c);
roots = (b*b) - (4*a*c);
if (roots > 0)
{printf(" real and distinct roots \n");}
else if (roots == 0)
{printf(" real and equal roots \n");}
else
{printf(" imaginary roots \n");}
return 0;
}
