#include<stdio.h>
int main ()
{
char a;
printf("enter the character");
scanf("%c",&a);
if(a>='a' && a<='z')
{printf("the character is a lowercase letter");}
else if(a>='A' && a<='Z')
{printf("the character is an uppercase letter");}
else if(a>='0' && a<='9')
{printf("the character is a digit"); }
else
{printf("the character is a special character");}
}
