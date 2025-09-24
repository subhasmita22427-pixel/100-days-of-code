#include <stdio.h>
int main()
 {
    int arr[100], n, pos, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements of array: ");
    for(i = 0; i < n; i++) 
    { scanf("%d", &arr[i]); }
    printf("Enter position to delete (0 to %d): ", n-1);
    scanf("%d", &pos);
    if(pos < 0 || pos >= n) 
    {printf("Invalid position!\n"); return 1; }
    for(i = pos; i < n - 1; i++) 
    { arr[i] = arr[i + 1]; }
    n--; 
    printf("Array after deletion: ");
    for(i = 0; i < n; i++) 
    {printf("%d ", arr[i]); }
    printf("\n");
    return 0;
}
