#include <stdio.h>
void findFirstnLastOccurrence(int nums[], int size, int target, int *first, int *last) {
    *first = -1; *last = -1;
    for (int i = 0; i < size; i++) 
    {
        if (nums[i] == target) 
        {
            if (*first == -1)
             { *first = i; }
            *last = i;
        }
    }
}
int main() 
{
    int size, target;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int nums[size];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < size; i++)
   {scanf("%d", &nums[i]); }
    printf("Enter the target integer: ");
    scanf("%d", &target);
    int first, last;
    findFirstnLastOccurrence(nums, size, target, &first, &last);
    printf("First occurrence index: %d\n", first);
    printf("Last occurrence index: %d\n", last);
    return 0;
}
