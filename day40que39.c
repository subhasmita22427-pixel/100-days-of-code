#include <stdio.h>
 int main() 
 {
    int matrix[10][10], rows, cols;
    printf("Enter number of rows and columns (max 10): ");
    scanf("%d %d", &rows, &cols);
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
     { for (int j = 0; j < cols; j++)
         {  scanf("%d", &matrix[i][j]); }
     }

    printf("Diagonal Traversal of the matrix:\n");
    for (int col = 0; col < cols; col++) 
    {
        int i = 0, j = col;
        while (i < rows && j >= 0)
         {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }
    for (int row = 1; row < rows; row++)
     {
        int i = row, j = cols - 1;
        while (i < rows && j >= 0) 
        {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}  
