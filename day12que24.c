#include<stdio.h>
int main ()
{
int unit,bill;
printf("Enter the unit consumed:");
scanf("%d",&unit);
if(unit<=100)
	bill = unit * 5;
else if(unit>100 && unit<=200)
	bill = 100 * 5 + (unit - 100) * 7;
else if(unit<=300)
	bill = 100 * 5 + 100 *7 + (unit - 200) *10 ;
else
	bill = 100 * 5 + 100 * 7 + 100 * 10 + (unit - 300) * 12;
printf("Electricity bill=%.d",bill);
return 0;
}
