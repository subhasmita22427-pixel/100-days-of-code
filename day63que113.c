#include <stdio.h>
int main() 
{
    int n, k;
    printf("Enter the number of elements of array: ");
    scanf("%d", &n);   
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the value of k: ");
    scanf("%d", &k);
    for(int i = 0; i < n-1; i++) 
    {
        for(int j = 0; j < n-i-1; j++) 
        {
            if(arr[j] > arr[j+1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    if(k > 0 && k <= n) 
    {
        printf("The %dth smallest element is: %d\n", k, arr[k-1]);
    }
     else 
    {
        printf("Invalid value of k\n");
    }
    
    return 0;
}
