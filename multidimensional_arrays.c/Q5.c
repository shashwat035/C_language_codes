#include<stdio.h>
int main()
{
    int rows,cols
;
    printf("enter the number of rows of the matrices :");
    scanf("%d",&rows);
    printf("enter the number of columns of the matrices :");
    scanf("%d",&cols);

    int matrix1[rows][cols],
    matrix2[rows][cols],
    result[rows][cols];

    printf("enter the elements of the matrix 1 :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    
    printf("enter the elements of the matrix 2 :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }     
    }
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }

    printf("the difference of the matrices is :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("\t%d\t",result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}





















































// ssn 1
// episode 1 1:12
// episode 2 24:21
// episode 4 2:18 
// episode 4 15:56
// episode 5 17:29
// episode 7 33:44 35:43
// episode 8 12:17
// episode 9 2:20 8:43
// ssn 2
// episode 2 9:22
// episode 4 20:09
// episode 5 30:01
// episode 6 4:30
// episode 7 17:40 21:25
// episode 8 3:51






