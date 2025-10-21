#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter no. of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++) 
    { scanf("%d", &arr[i]);}
    printf("Previous greater elements are: ");
    for (i = 0; i < n; i++)
     {
        int prev_greater = -1;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
        {prev_greater = arr[j];
                break;
            }
        }
        if (i != 0) {
            printf(", ");
        }
        printf("%d", prev_greater);
    }
    printf("\n");
    return 0;
}
