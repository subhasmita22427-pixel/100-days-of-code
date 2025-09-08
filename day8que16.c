#include<stdio.h>
int main ()
{
int a,b,c;
printf(" Enter the values of a,b and c \n");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{printf(" a is the largest number \n");}
else if(b>a && b>c)
{printf(" b is the largest number \n");}
else
{printf(" c is the largest number \n");}
return 0;
}
