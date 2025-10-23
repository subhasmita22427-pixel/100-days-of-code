
#include <stdio.h>
int sumsubarray(int arr[], int n, int k)
 {
    int sum = 0;
    for (int i = 0; i < k; i++)
    {sum += arr[i]; }
    int windowsum =sum;
    for (int i = k; i < n; i++) 
    { windowsum += arr[i] - arr[i - k];
        if (windowsum >sum)
         { sum = windowsum;}
    }
    return sum;
}
int main() 
{
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array: ");    
    for (int i = 0; i < n; i++)
    {scanf("%d", &arr[i]); }
    printf("Enter size of subarray: ");
    scanf("%d", &k);
    int result = sumsubarray(arr, n, k);
    printf("The max sum of subarrays of size %d is: %d\n", k, result);
    return 0;
}  
