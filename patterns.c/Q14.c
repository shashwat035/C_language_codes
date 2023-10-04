#include<stdio.h>
int main()
{
    
    for (int i = 1; i <= 5; i++)
    {
        for(int space=5 ; space>i ; space--)
        {
            printf(" ");
        }
        for (int j = 1 ; j <= i ; j++)
        {
            printf("%d",j);
        }
        for(int k=i-1 ; k>0 ; k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}
