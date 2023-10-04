#include<stdio.h>
int main()
{
    int row;
	printf("Enter row:");
	scanf("%d",&row);

    for (int i = 0; i < row; i++)
    {
        for (int space = row-1; space >i; space--)
        {
            printf(" ");
        }
        for (int star = 0; star <= i; star++)
        {
            printf("*");
        }        
        printf("\n");        
    }

    return 0;
}