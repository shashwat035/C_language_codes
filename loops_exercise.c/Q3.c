#include<stdio.h>
int main()
{
    int i,sum=0,a;
    printf("enter the value of a :");
    scanf("%d",&a);

    for (i=1 ; i<=a ; i++)
    {
        printf("sum=%d+%d=",sum,i);
        sum=sum+i;
        printf("%d\n",sum);
    }

    printf("the sum of the range =%d\n",sum);
    return 0;
}
