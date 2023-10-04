#include<stdio.h>
int main()
{
    //input the number of rows and columns from the user//
    int rows,cols;
    printf("enter the number of rows of the matrix :");
    scanf("%d",&rows);
    printf("enter the number of columns of the matrix :");
    scanf("%d",&cols);

    //declration of the matrix//
    int matrix[rows][cols];

    //input the elements of the matrix from the user//
    printf("enter the elements of the matrix :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    //printing the matrix of the elements entered by the user//
    printf("the matrix u have entered is :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("\t%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}