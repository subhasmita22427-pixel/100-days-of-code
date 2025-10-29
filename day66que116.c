#include <stdio.h>
void findtwosum(int* nums, int numsSize, int target, int* index1, int* index2) 
{ for (int i = 0; i < numsSize; i++) 
    { for (int j = i + 1; j < numsSize; j++) 
        {  if (nums[i] + nums[j] == target) 
            { *index1 = i; *index2 = j; return; }
        }
    }
    *index1 = -1;
    *index2 = -1;
}
int main() 
{ int n, target;
    printf("Enter no. of elements in array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the elements : ");
    for (int i = 0; i < n; i++) 
    { scanf("%d", &nums[i]); }
    printf("Enter the target sum: ");
    scanf("%d", &target);
    int index1, index2;
    findtwosum(nums, n, target, &index1, &index2);
    printf("%d %d\n", index1, index2);
    return 0;
}
