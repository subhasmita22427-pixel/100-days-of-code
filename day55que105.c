#include <stdio.h>
int main() 
{
    int n, i, j, count, majorityElement = -1;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) 
    { scanf("%d", &nums[i]);}
    for(i = 0; i < n; i++)
 {
        count = 0;
        for(j = 0; j < n; j++)
        {
            if(nums[j] == nums[i]) 
            {count++; }
        }
        if(count > n / 2)
       {
            majorityElement = nums[i];
            break;
        }
    }
    if(majorityElement != -1) 
    {printf("The majority element is: %d\n", majorityElement); } 
    else { printf("-1\n"); }
    return 0;
}
