#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isIdentity = 1; 

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (i == j) 
            {
                if (matrix[i][j] != 1) 
                {
                    isIdentity = 0; 
                    break;
                }
            } 
            else 
            {
                if (matrix[i][j] != 0) 
                {
                    isIdentity = 0; 
                    break;
                }
            }
        }
        if (isIdentity == 0) 
        {
            break; 
        }
    }

    if (isIdentity) 
    {
        printf("The entered matrix is an identity matrix.\n");
    } 
    else 
    {
        printf("The entered matrix is not an identity matrix.\n");
    }

    return 0;
}
