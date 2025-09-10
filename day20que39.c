#include <stdio.h>
int main() {
    int num, product = 1, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    num = (num < 0) ? -num : num;
    while (num != 0)
    {
        remainder = num % 10;
        if (remainder % 2 != 0)
         {product *= remainder;}
        num /= 10;
    }
    if (product == 1) {
        printf("No odd digits found.\n");
    } else {
        printf("Product of odd digits is: %d\n", product);
    }
    return 0;
}
