#include<stdio.h>
int main ()
{
int n , sum=0 , i ;
printf("Enter a positive integer: ");
scanf("%d",&n);                             
for(i=1;i<=n;i++)
{
sum=sum+i;                  
}
printf("the Sum of firnt n natural no.s = %d",sum);
return 0;
}
