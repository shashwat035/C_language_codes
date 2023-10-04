#include<stdio.h>
int main()
{
    int number,count=0;
    printf("enter the number :");
    scanf("%d",&number);

    while (number>0)
    {
        number=number/10;
        count=count + 1;
    }

    printf("the number of digits in the number is : %d ",count);

    return 0;
}
 