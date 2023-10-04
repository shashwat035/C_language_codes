#include<stdio.h>
int main()
{
    int num,neven=0,digit;
    printf("enter the number in which odd digits are to be counted :");
    scanf("%d",&num);

    while(num>0)
    {
        digit= num % 10;
        if (digit % 2 == 0)
        {
            neven++;
        }
        num/=10;
    }
    
    printf("the number of odd digits is : %d",neven);

    return 0;    
}