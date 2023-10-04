#include<stdio.h>
int main()
{
    //inputting the number of rows and columns//
    int rows,cols;
    printf("enter the number of rows :");
    scanf("%d",&rows);
    printf("enter the number of columns :");
    scanf("%d",&cols);

    int matrix[rows][cols];

    //input the elements from user//
    printf("enter the elements of the matrix :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d",&matrix[i][j]);
        }        
    }
    
    //logic to calculate the sum of all the elements//
    int sum=0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum+= matrix[i][j];
        }  
    }

    //print the sum//
    printf("sum of all the elements of the matrix is : %d",sum);

    return 0;
}