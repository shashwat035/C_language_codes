#include<stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int s = 0; s < i; s++)
        {
            printf(" ");
        }
        for (int st = 5; st > i; st--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
} 