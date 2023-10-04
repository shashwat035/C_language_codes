#include<stdio.h>
int main()
{
    int i,sum=0;
    for (i=1 ; i<=10 ; i++)
    {
        printf("sum=%d+%d=",sum,i);
        sum=sum+i;
        printf("%d\n",sum);
    }
    
    printf("the sum of the first 10 natural numbers =%d",sum);

    return 0;
}
