#include <stdio.h>
int main() 
{
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
     { scanf("%d", &arr[i]); }
    printf("Enter size of subarray : ");
    scanf("%d", &k);
    printf("Max elements in each subarray of size %d are: ", k);
    for (int i = 0; i <= n - k; i++) 
    {
        int max = arr[i];
        for (int j = 1; j < k; j++)
         {
            if (arr[i + j] > max) 
            {
                max = arr[i + j];
            }
        }
        printf("%d ", max);
    }
    return 0;
}
