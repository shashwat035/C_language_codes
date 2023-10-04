#include<stdio.h>    
int main()    
{
    int i,num1=0,num2=1,num3,elements;
    printf("enter the number of elements:");
    scanf("%d",&elements);
    printf("the fibonacci series is:\n%d %d",num1,num2);

    for(i=2;i<=elements;i++)
    {
        num3=num1+num2;
        printf(" %d",num3);
        num1=num2;
        num2=num3;
    }

    return 0;
}
 