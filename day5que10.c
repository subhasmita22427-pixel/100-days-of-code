#include<stdio.h>
int main ()
{
int time,sec,hours,minutes;
printf(" enter the time in seconds");
scanf("%d",&time);
hours=time/3600;
minutes=(time%3600)/60;
sec=(time%3600)%60;
printf("the time in hours,minutes and seconds is %d:%d:%d",hours,minutes,sec);
return 0;
}
