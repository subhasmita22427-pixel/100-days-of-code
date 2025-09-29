#include <stdio.h>
int main()
 {
    int matrix[3][3];
    printf("Enter elements of 3x3 matrix:\n");
    for(int i = 0; i < 3; i++) 
    {
        for(int j = 0; j < 3; j++) 
        { scanf("%d", &matrix[i][j]);}
    }
    printf("The matrix is:\n");
    for(int i = 0; i < 3; i++) 
    {
        for(int j = 0; j < 3; j++) 
        {printf("%d ", matrix[i][j]);}
        printf("\n");
    }
    return 0;
}
