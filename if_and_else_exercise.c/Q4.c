#include<stdio.h>
int main()
{
    int year;
    printf("enter the year :\n");
    scanf("%d",&year);

    if (year%4 == 0)
    {
        printf("the year is a leap year");
    }

    else
    {
        printf("the year is not a leap year");
    }

    return 0;
}