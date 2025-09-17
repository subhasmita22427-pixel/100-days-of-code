#include <stdio.h>
int main ()
{
    int n,i;
    printf(" enter the no. of elements in the array:");
    scanf("%d",&n);
    int arr[n];
    printf(" enter the elements of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);    
    }
   printf("element:");
   for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);    
    }
    return 0;  
}
