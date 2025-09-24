#include <stdio.h>
int main() 
{
    int arr[100], n, pos, val;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
     {scanf("%d", &arr[i]);}
    printf("Enter the position to insert (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &val);
    if (pos < 0 || pos > n) 
    {printf("Invalid position!\n"); return 1; }
    for (int i = n; i > pos; i--) 
    {arr[i] = arr[i - 1];}
    arr[pos] = val; n++; 
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++)
    { printf("%d ", arr[i]);}
    printf("\n");
    return 0;
}
