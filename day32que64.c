#include <stdio.h>
int main() 
{
    int num, digit, count[10] = {0}, maxCount = 0, mfdigit;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mfdigit = i;
        }
    }
    printf("The digit that occurs the most is: %d (occurs %d times)\n", mfdigit, maxCount);
    return 0;
}
