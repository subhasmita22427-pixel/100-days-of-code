#include <stdio.h>
#include <stdio.h>
int main() 
{
    int n, i;
    float sum = 0.0;
    float numerator = 1, denominator = 1;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1; 
            numerator = 3;
            denominator = 4;
        } else {
            sum += numerator / denominator;
            numerator += 2;
            denominator += 2;
        }
    }
    printf("Approximate sum: %.1f\n", sum);
    return 0;
}
