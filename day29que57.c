#include <stdio.h>
int main() 
{ 
   int n,i,sum =0;
   printf(" Enter the no. element:");
   scanf("%d",&n);
    int a[n];   
    printf(" Enter the %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    printf(" Sum of %d elements is : %d",n,sum);
    return 0;
}
