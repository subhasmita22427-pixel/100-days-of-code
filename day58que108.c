
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);   
    int nums[n];
    printf("Enter elements :\n");
    for(int i = 0; i < n; i++) 
    {scanf("%d", &nums[i]); }  
    int answer[n];
    for(int i = 0; i < n; i++) 
    {
        int product = 1;
        for(int j = 0; j < n; j++) 
        {
            if(i != j) 
            { product *= nums[j];  }
        }
        answer[i] = product;
    }
    printf("The output array:\n");
    for(int i = 0; i < n; i++)
     { printf("%d ", answer[i]);}    
    return 0;
}
