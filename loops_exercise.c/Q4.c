#include<stdio.h>
int main()
{
    int start,end,i,sum=0;
    float average;
    printf("enter the starting point of the range :");
    scanf("%d",&start);
    printf("enter the ending range of the range :");
    scanf("%d",&end);

    for (i=start ; i<=end ; i++)
    {
        printf("sum=%d+%d=",sum,i); 
        sum=sum+i;
        printf("%d\n",sum);
    }

    printf("the sum of the range is: %d\n",sum);

    average=sum/(i-1.0);
    printf("the average of the range is: %.2f",average);
    return 0;
}