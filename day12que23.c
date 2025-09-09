#include<stdio.h>
int main ()
{
int days,fine;
printf("Enter the due days:");
scanf("%d",&days);
if(days<=5)
{
    fine= days*2;
printf("You have to pay the fine of Rs.%d\n",fine);}
if(days>5 && days<=10)
{
    fine= days*4;
printf("You have to pay the fine of Rs.%d\n",fine);}
if(days>10 && days<=30)
{fine= days*6;
    printf("You have to pay the fine of Rs.%d\n",fine);}
if(days > 30)
{ printf("Your membership is cancelled");}
return 0;
}
