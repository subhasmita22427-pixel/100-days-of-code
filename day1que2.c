#include <stdio.h>
int main() 
{
    float num1, num2;
    float sum, difference, product, quotient;
    printf("Enter the two numbers: ");
    scanf("%f%f",&num1,&num2);
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    printf("Calculating the results...\n");
    printf("Sum: %f\n", sum);
    printf("Difference: %f\n", difference);
    printf("Product: %f\n", product);
    if (num2 != 0)
    { quotient = num1 / num2;
     printf("Quotient: %f\n", quotient); } 
    else {printf("Quotient: Undefined (division by zero)\n"); }
    return 0;
}
