#include<stdio.h>
int main ()
{
float a,b,c;
printf(" enter the length of the sides of the triangle \n");
scanf("%f%f%f",&a,&b,&c);
if(a==b && a!=c || b==c && b!=a || c==a && c!=b )
{printf(" the triangle is isosceles \n");    }
else if (a==b && b==c)
{printf(" the triangle is equilateral \n");}
else if (a!=b && b!=c && c!=a)
{printf(" the triangle is scalene \n");}
return 0;
}
