#include<stdio.h>
int main()
{
    float f,celcius;
    printf("enter the value in farenheit : ");
    scanf("%f",&f);

    celcius= (f-32)*5.0/9.0;

    printf("the value in celcius is %f",celcius);

    return 0;

} 