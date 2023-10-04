#include<stdio.h>
int main()
{
    int m,n;
    printf("enter the number :");
    scanf("%d",&m);

    if(m>0)
    {
        n=1;
        printf("the value of n = %d",n);
    }
    else if(m<0)
    {
        n=-1;
        printf("the value of n = %d",n);
    }
    else
    {
        n=0;
        printf("the value of n = %d",n);
    }

    return 0;
}
