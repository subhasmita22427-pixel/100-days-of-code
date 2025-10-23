#include <stdio.h>
#define max 100
int main() 
{
    int arr[max], n, i, j, prev;
    printf("Enter no. of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++)
     { scanf("%d", &arr[i]); }
    printf("Previous greater elements are:\n");
    for(i = 0; i < n; i++)
     {
        prev = -1;
        for(j = i - 1; j >= 0; j--) 
        {if(arr[j] > arr[i])
             {prev= arr[j];
                break; } }
        if(i != 0) 
        { printf(", ");  }
        printf("%d", prev); }
    printf("\n");
    return 0;
}
