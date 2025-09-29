#include <stdio.h>
int main() 
{
    int matrix[10][10], transpose[10][10], rows, cols, i, j, isSymmetric = 1;
    printf("Enter number of rows and columns (max 10): ");
    scanf("%d %d", &rows, &cols);
    if (rows != cols) 
    {
        printf("Matrix must be square to be symmetric.\n");
        return 0;
    }
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++)
     
    { for (j = 0; j < cols; j++) 
        {scanf("%d", &matrix[i][j]); }
    }
    for (i = 0; i < rows; i++)
     { for (j = 0; j < cols; j++)
         { transpose[j][i] = matrix[i][j]; }
     }
    for (i = 0; i < rows; i++) 
    { for (j = 0; j < cols; j++) 
        { if (matrix[i][j] != transpose[i][j])
             { isSymmetric = 0;
                break;
            } }
        if (!isSymmetric) break;
    }

    if (isSymmetric) { printf("The matrix is symmetric.\n");} 
    else {printf("The matrix is not symmetric.\n"); }
    return 0;
}
