#include<stdio.h>
int main ()
{
int n1,n2,calc;
printf("Enter two integers: ");
scanf("%d %d",&n1,&n2);
printf("Enter 1 for addition\n");
printf("Enter 2 for subtraction\n");
printf("Enter 3 for multiplication\n");
printf("Enter 4 for division\n");
printf("Enter your choice: ");
scanf("%d",&calc);  
switch(calc)
{
case 1:
printf("%d + %d = %d",n1,n2,n1+n2);
break;
case 2:
printf("%d - %d = %d",n1,n2,n1-n2);
break;
case 3:
printf("%d * %d = %d",n1,n2,n1*n2);     
break;
case 4:
if(n2!=0)
printf("%d / %d = %d",n1,n2,n1/n2);
else
printf("Division by zero is not allowed.");
break;
default:
printf("Invalid input");
}
return 0;
}
