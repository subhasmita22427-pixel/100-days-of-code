#include <stdio.h>
int main() 
{
    int n, k;
    printf("Enter the size ofarray: "); scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the size of the subarray (k): "); scanf("%d", &k);
    printf("1st negative integers in each subarray of size %d:\n", k);
    for (int i = 0; i <= n - k; i++) 
    {
        int found = 0;
        for (int j = i; j < i + k; j++)
         {
            if (arr[j] < 0) 
            {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }
        if (!found) 
        {
            printf("0 ");
        }
    }
    printf("\n");
    return 0;
}
