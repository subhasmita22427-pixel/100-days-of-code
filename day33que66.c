#include <stdio.h>
int main() 
{
    int arr[100], n, i, pos, val;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++) 
    { scanf("%d", &arr[i]); }
    printf("Enter the value to be inserted: ");
    scanf("%d", &val);
    pos = 0;
    while(pos < n && arr[pos] < val)
     { pos++;  }
    for(i = n; i > pos; i--)
     {arr[i] = arr[i - 1]; }
    arr[pos] = val;
    n++; 
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
     { printf("%d ", arr[i]);}
    
    return 0;
}
