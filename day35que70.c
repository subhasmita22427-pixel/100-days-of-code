#include <stdio.h>
 int main() 
 {
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++)
     {scanf("%d", &arr[i]);}
    printf("Enter the number of positions to rotate (k): ");
    scanf("%d", &k);
    k = k % n;
    int temp[n];
    for(int i = 0; i < n; i++) 
    {temp[(i + k) % n] = arr[i];}
    for(int i = 0; i < n; i++) 
    {arr[i] = temp[i]; }
    printf("Array after rotating to the right by %d positions:\n", k);
    for(int i = 0; i < n; i++)
     {printf("%d ", arr[i]);}
    return 0;
 }
