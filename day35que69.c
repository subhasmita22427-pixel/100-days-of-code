#include <stdio.h>
 int main() 
 {
    int n, i;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    { scanf("%d", &arr[i]); }
    int largest = arr[0], second_largest = -2147483648;
    for(i = 1; i < n; i++) 
    {
        if(arr[i] > largest) 
        {second_largest = largest;
            largest = arr[i];} 
       else if(arr[i] > second_largest && arr[i] != largest) 
        {second_largest = arr[i]; }
    }
    if (second_largest == -2147483648) {printf("There is no second largest element in the array.\n");}
     else {printf("The second largest element in the array is: %d\n", second_largest);}
    return 0;
}
