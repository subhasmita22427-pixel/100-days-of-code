#include <stdio.h>
#include <math.h>
int main() 
{
    int num, original, n = 0, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    temp = num;
    while (temp != 0) {
        n++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }
    if (sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}
