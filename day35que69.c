#include <stdio.h>
int main() 
{
    int n, i;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    { scanf("%d", &arr[i]); }
    int largest = arr[0];
    for(i = 1; i < n; i++) 
    {if(arr[i] > largest)
         {largest = arr[i];}
    }
    printf("The largest element in the array is: %d\n", largest);
    return 0;
}
