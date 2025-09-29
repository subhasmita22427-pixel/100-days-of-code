#include <stdio.h>
int main()
 {
    int matrix[10][10], n, i, j, k, l, flag = 0;
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        { scanf("%d", &matrix[i][j]); }
    }
    for (i = 0; i < n; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {if (matrix[i][i] == matrix[j][j])
             { flag = 1; break; }
        }
        if (flag) break;
    }

    if (flag) { printf("The elements on the main diagonal are not distinct.\n");  } 
    else {  printf("The elements on the main diagonal are distinct.\n"); }
    return 0;
}
