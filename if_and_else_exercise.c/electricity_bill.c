#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int units,customerid,amount;
    float charge,surcharge,bill;
    printf("enter your customer id : ");
    scanf("%d",&customerid);
    printf("enter number of units consumed :");
    scanf("%d",&units);

    if (units < 200 && units >= 0 )
    {
        charge=2.20;
        amount=units*2.20;
        printf("the charge per unit to be paid is :%f\n",charge);
    }

    else if (units >= 200 && units < 400)
    {
        charge=4.50;
        amount=units*4.50;
        printf("the charge per unit to be paid is :%f\n",charge);
    }

    else if (units >= 400 && units < 600)
    {
        charge=6.80;
        amount=units*6.80;
        printf("the charge per unit to be paid is :%f\n",charge);
    }

    else if (units >= 600)
    {
        charge=8.00;
        amount=units*8.00;
        printf("the charge per unit to be paid is :%f\n",charge);
    }

    else 
    {
        printf("invalid input");
        exit(0);
    }

    if (amount > 1000)
    {
        surcharge=amount*15.0/100.0;
        bill=amount+surcharge;
        printf("the surcharge you have to pay is %f\n",surcharge);
    }

    if (amount < 200)
    {
        bill=200;
    }

    printf("the final bill to be paid is : %f\n",bill);
    getch();
    
    return 0; 
}

