#include<stdio.h>
int main()
{
    float temp;
    printf("enter the temperature in centigrade :");
    scanf("%f",&temp);

    if (temp<0)
    {
        printf("freezing temperature");
    }
    else if (temp>=0 && temp<10)
    {
        printf("very cold temperature");
    }
    else if (temp>=10 && temp<20)
    {
        printf("cold weather");
    }
    else if (temp>=20 && temp<30)
    {
        printf("normal in temperature");
    }
    else if (temp>=30 && temp<40)
    {
        printf("its hot");
    }
    else if (temp>=40)
    {
        printf("its very hot");
    }

    return 0;
}