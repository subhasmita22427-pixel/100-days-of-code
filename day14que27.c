#include<stdio.h>
int main ()
{ int i,n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        sum += (2 * i + 1);  }
       {printf(" the sum of odd no.s is %d\n",sum); }
    return 0;
}
