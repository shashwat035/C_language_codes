#include <stdio.h>

int main()
{
    int num,digit;
    printf("enter a number :");
    scanf("%d",&num);

    if (num < 0)
    {
        printf("you cannot enter a negative number !");
    }

    int evenSum=0,oddSum=0;
    int temp=num,DigitCount=0;

    while (temp>0)
    {
        digit=temp % 10;
        DigitCount++;

        if (digit % 2 == 0)
        {
            evenSum += digit;
        }
        else
        {
            oddSum += digit;
        }
        temp /= 10;
    }
    
    int a=oddSum,b=evenSum,nextTerm;

    printf("Fibonacci series with %d terms :",DigitCount);

    for (int i = 0; i < DigitCount; i++)
    {
        printf("%d", a);
        if (i < DigitCount) 
        {
            printf(", ");
        }

        int nextTerm = a + b;

        a = b;
        b = nextTerm;
    }

    return 0;
}