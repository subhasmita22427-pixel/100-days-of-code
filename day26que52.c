#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= i + (i - 1); j++) {
            printf("*");
            printf("\n");
        }
        printf(" ");
        if (i < 3) {
            printf(" ");
            printf("\n");
        }
    }
    for (i = 2; i >= 1; i--) 
    {
        printf(" ");
        printf("\n");
        for (j = 1; j <= i + (i - 1); j++) 
        {
            printf("*");
            printf("\n");
        }
        printf(" ");
        printf("\n");
    }
    return 0;
}
