#include <stdio.h>
int main()
 {
    int num1, num2, swap;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swap = num1;
    num1 = num2;
    num2 = swap;
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
