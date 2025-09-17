#include <stdio.h>
int prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are:\n", n);
    for (i = 2; i <= n; i++)
    {
        if (prime(i) == 0)
        {
            printf("%d\n", i);
        }
    }
    printf("\n");
    return 0;
}
