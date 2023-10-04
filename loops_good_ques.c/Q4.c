#include<stdio.h>
int main()
{
    int num,nodd=0,digit;
    printf("enter the number in which odd digits are to be counted :");
    scanf("%d",&num);

    while(num>0)
    {
        digit= num % 10;
        if (digit % 2 == 1)
        {
            nodd++;
        }
        num/=10;
    }
    
    printf("the number of odd digits is : %d",nodd);

    return 0;    
}