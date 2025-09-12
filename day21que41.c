#include <stdio.h>
int main() 
{ int n,rem,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(;n!=0;n=n/10)
    {
        rem=n%10;
        rev=rev*10+rem;
    }
    printf("Reversed Number: %d",rev);
    return 0;
}
