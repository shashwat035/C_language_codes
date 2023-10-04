#include<stdio.h>
int main()
{
    //defining rows and columns of the matrix//
    int rows,columns;
    rows=3;
    columns=3;

    //declaration of the matrix//
    int matrix[rows][columns];

    //input the elements by the user//
    printf("enter the elements of the  3 X 3 matrix :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    
    //to print the matrix which has been input by the user//
    printf("the matrix u entered is :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("\t %d \t",matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
