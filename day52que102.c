#include <stdio.h>
int index(int arr[], int n, int x) 
{
    for (int i = 0; i < n; i++) 
    { if (arr[i] >= x) 
        {return i;}
    }
    return -1; 
}
int main() 
{
    int n, x;
    printf("Enter the number of elements array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++)
    { scanf("%d", &arr[i]);
    }
    printf("Enter the integer x: ");    
    scanf("%d", &x);
    int result = index(arr, n, x);
    if (result != -1) 
    { printf("The index of the smallest element greater than or equal to %d is: %d\n", x, result);
    } 
    else
    {printf("No element greater than or equal to %d found in the array.\n", x);
    }
    return 0;
}
