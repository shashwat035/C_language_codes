#include<stdio.h>
int main()
{
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    int choice;
    float result;
    printf("enter choice:");
    scanf("%d",&choice);

    if (choice==1)
    {
        int num1,num2;
        printf("enter the 2 numbers:\n");
        scanf("%d%d",&num1,&num2);
        result=num1+num2;
    }
    else if (choice==2)
    {
        int num1,num2;
        printf("enter the 2 numbers:\n");
        scanf("%d%d",&num1,&num2);
        result=num1-num2;
    }
    else if (choice==3)
    {
        int num1,num2;
        printf("enter the 2 numbers:\n");
        scanf("%d%d",&num1,&num2);
        result=num1*num2;
    }
    else if (choice==4)
    {
        int num1,num2;
        printf("enter the 2 numbers:\n");
        scanf("%d%d",&num1,&num2);
        result=num1/num2;
    }
    else 
    {
        printf("invalid input"); 
    }

    printf("reault=%.2f",result);

    return 0;
}