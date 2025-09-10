#include <stdio.h>
int main() 
{
    int n,sum=0,rem;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    n=(n<0)?-n:n; 
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("Sum of digits: %d\n",sum);
    return 0;
}
