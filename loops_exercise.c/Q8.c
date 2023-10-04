#include<stdio.h>
int main()
{
    int sum=0,n,i;
    printf("enter the number of terms :");
    scanf("%d",&n);
    printf("\nthe odd naturall numbers are :");
    for (i=1 ; i<=n ; i++)
    {
        printf("%d,",2*i-1);
        sum+=2*i-1;
    }

    printf("\nthe sum of the odd natural numbers upto %d terms is :%d",n,sum);

    return 0;
}
