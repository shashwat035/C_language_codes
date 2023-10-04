#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter the 2 numbers :\n");
    scanf("%d%d",&num1,&num2);

    if (num1==num2)
    {
        printf("both the numbers are equal");
    }
    
    else
    {
        printf("both the numbers are not equal");
    }

    return 0;
}