#include <stdio.h>
int factorial(int num) {
    int f = 1;
    for (int i = 1; i <= num; i++)
        f *= i;
    return f;
}

int main() 
{ 
    int n, i, fac = 1, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        fac = fac * i;
    for (int temp = n; temp > 0; temp = temp / 10)
    { 
        rem = temp % 10;
        sum = sum + factorial(rem);
 }
    if (sum == n)
    { printf("The number is strong no.");   }
    else
    { printf("The number is not strong no."); }
    return 0;
}
