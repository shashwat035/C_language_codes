#include <stdio.h>

int main() 
{
    int row, col;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int matrix[row][col];
    int nonZeroCount = 0;

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] != 0) 
            {
                nonZeroCount++;
            }
        }
    }

    // Print the matrix
    printf("Matrix:\n");
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the count of non-zero elements
    printf("Number of non-zero elements: %d\n", nonZeroCount);

    return 0;
}
