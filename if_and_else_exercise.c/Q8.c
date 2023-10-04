#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter the three numbers :\n");
    scanf("%d%d%d",&num1,&num2,&num3);

    if (num1>num2 && num1>num3)
    {
        printf("%d is the greatest among all three",num1);
    }
    else if (num2>num1 && num2>num3)
    {
        printf("%d is the greatest among all three",num2);
    }
    else
    {
        printf("%d is the greatest among all three",num3);
    }

    return 0;
}