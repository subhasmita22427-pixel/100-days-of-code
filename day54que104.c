#include <stdio.h>
int main() 
{
    int n, i, sum1 = 0, sum2 = 0, pivot = -1;
    printf("Enter a +ve integer n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
 {
        sum1 += i;  sum2 = 0; 
        for (int j = i; j <= n; j++) 
        { sum2 += j;}
        if (sum1 == sum2) 
        {pivot = i;
            break; }
    }
    printf("output: %d\n", pivot);
    return 0;
}
