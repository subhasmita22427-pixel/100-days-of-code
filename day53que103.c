#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the no. of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) 
    {scanf("%d", &arr[i]);}   
    int totalSum = 0;
    for(i = 0; i < n; i++)
    {totalSum += arr[i];}    
    int leftSum = 0;
    for(i = 0; i < n; i++) 
    {
        totalSum -= arr[i]; 
        if(leftSum == totalSum)
        {
            printf("output: %d\n", i);
            return 0;
        }        
        leftSum += arr[i];
    }
    printf("No pivot index found. Output: -1\n");
    return -1;
}
