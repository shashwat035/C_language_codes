#include<stdio.h>
#include<math.h>

int main()
{
    float principle,rate,time,CI,amount;
    printf("enter the principle amount:\n");
    scanf("%f",&principle);
    printf("enter the rate:\n");
    scanf("%f",&rate);
    printf("enter the time:\n");
    scanf("%f",&time);

    amount = principle* (pow((1 + rate / 100), time));
    printf("the amount is:%.2f\n",amount);
    CI=amount-principle;
    printf("the compound interest is:%f",CI);

    return 0;
}