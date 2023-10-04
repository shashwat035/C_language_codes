#include<stdio.h>
int main()
{
    int num,rem,sum=0,temp;
    printf("enter num :");
    scanf("%d",&num);
    
    temp=num;

    while (num>0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }

    printf("sum= %d \n",sum);

    if (sum==temp)
    {
        printf("%d is a amstrong number",temp);
    }
    else
    {
        printf("the number is not amstrong number");
    }

    return 0;
}

//there are only 3 amstrong number in three digit numbers 370, 371 and 153//