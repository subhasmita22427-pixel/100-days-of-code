#include <stdio.h>
int main() 
{
    int matrix[3][3], sum = 0;
    printf("Enter elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
         {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++) 
        {sum += matrix[i][j];}
    }
    printf("Sum of all elements in the matrix: %d\n", sum);
    return 0;
}
