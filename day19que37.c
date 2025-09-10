#include <stdio.h>
int main() 
{
    int a, b, i, lcm;;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    lcm=a*b;
    printf("LCM of %d and %d is %d", a, b, lcm);
    return 0;
}
