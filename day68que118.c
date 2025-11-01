#include <stdio.h>
int findmissingno(int arr[], int n) 
{ 
    int total = n * (n + 1) / 2; 
    for (int i = 0; i < n; i++) 
        total -= arr[i]; 
    return total; 
}
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);        
    int arr[n-1];
    printf("Enter the elements of the array (between 0 to %d except one):\n", n);
    for(int i=0; i<n-1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int missingno = findmissingno(arr, n-1);
    printf("The missing number is: %d\n", missingno);
    return 0;
}
