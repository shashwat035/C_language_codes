#include<stdio.h>
int main()
{
    int cp,sp,profit,loss;
    printf("enter the cost price of the product :\n");
    scanf("%d",&cp);
    printf("enter the selling price of the product :\n");
    scanf("%d",&sp);

    if (cp > sp)
    {
        printf("this is a loss of %d",(cp-sp));
    }

    else
    {
        printf("this is a profit of %d",(sp-cp));
    }

    return 0;
}