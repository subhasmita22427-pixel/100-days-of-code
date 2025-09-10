#include <stdio.h>
int main() 
{
    long long num;
    printf("Enter a binary number: ");
    scanf("%lld", &num);
    long long result = 0;
    int digit;
    while (num != 0) {
        digit = num % 10;
        if (digit == 0) {
            result = result * 10 + 1;
        } else if (digit == 1) {
            result = result * 10 + 0;
        }
        num /= 10;
    }
    printf("1's complement: ");
    while (result != 0) {
        printf("%d", result % 10);
        result /= 10;
    }
    printf("\n");
    return 0;
}
