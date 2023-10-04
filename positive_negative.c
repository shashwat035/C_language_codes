#include<stdio.h>
int main()
{
    int num;
    printf("enter the numnber:\n");
    scanf("%d",&num);

    if (num>0)
    {
        printf("this is a positive number\n");
    }

    else if (num==0)
    {
        printf("this is ZERO\n");
    }

    else
    {
        printf("this is a negative number\n");
    }

    return 0;
}
