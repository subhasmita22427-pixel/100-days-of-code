#include <stdio.h>
int main() 
{
    int n;
    printf("enter no. of elements array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter %d integers:\n", n);
    for (int i = 0; i < n; i++) 
    { scanf("%d", &arr[i]); }
    printf("next greater elements:\n");
    for (int i = 0; i < n; i++) 
    {
        int nextgreater = -1; 
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[j] > arr[i]) 
            { nextgreater = arr[j];
                break; 
            }
        }
        printf("%d", nextgreater);
        if (i < n - 1)
         { printf(", "); }
    }
    printf("\n");
    return 0;
}
