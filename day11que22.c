#include<stdio.h>
int main ()
{
int cp,sp;
printf("Enter the cost price and selling price of the item\n");
scanf("%d%d",&cp,&sp);  
if(sp>cp)
{printf("Profit\n");}
else if(cp>sp)
{printf("Loss\n");}
else
{printf("Neither profit nor loss\n");}
return 0;
}
