#include <stdio.h>
int maxsubarray(int arr[], int n) 
{
    int max = arr[0];
    int maxending = arr[0];

    for (int i = 1; i < n; i++) 
    {
        maxending = (arr[i] > maxending + arr[i]) ? arr[i] : maxending + arr[i];
        max = (max > maxending) ? max : maxending;
    }
    return max;
}
int main() 
{
    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements : ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int result = maxsubarray(arr, n);
    printf("The maximum sum of contiguous subarray is: %d\n", result);
    return 0;
}
