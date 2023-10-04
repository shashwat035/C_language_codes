#include<stdio.h>
int main()
{
    int rows,cols;
    printf("enter the number of rows :");
    scanf("%d",&rows);
    printf("enter the number of columns :");
    scanf("%d",&cols);

    int matrix[rows][cols];

    printf("enter the elements of the matrix :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("the matrix is :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("\t%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    int countEven=0,countOdd=0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] % 2 == 0)
            {
                countEven=countEven+1;
            }
    
            else
            {
                countOdd=countOdd+1;
            }
        }
    }

    printf("the number of even elements is :%d \n the number of odd elements is :%d",countEven,countOdd);

    return 0;
}