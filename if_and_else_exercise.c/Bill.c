#include <stdio.h>

int main()
{
    int user_id,units,mobileNo;
    float rate,bill,amount;
    printf("\t\t========== Enter the following details ==========\t\n");
    printf("Enter your user id :");
    scanf("%d",&user_id);
    printf("Enter your mobile number :");
    scanf("%d",&mobileNo);
    printf("Enter the number of units consumed :");
    scanf("%d",&units);

    if (units <= 199) 
    {
        amount=100;
        printf("The total bill to be paid is Rs.200");
        return 0;
    }
    else if (units >= 200 && units <=399)       
    {
        rate=1.5;
        amount=rate*units;
        printf("Your amount is Rs.%f",amount);
    }
    else if (units >=400 && units <=599)
    {
        rate=20;
        amount=rate*amount;
        printf("Your amount is Rs.%f",amount);
    }
    else if (units >= 600 && units <=799)
    {
        rate=2.5;
        amount=rate*units;
        printf("Your amount is Rs.%f",amount);
    }
    else if (units >=800 && units <-999)
    {
        rate=3.0;
        amount=rate*units;
        printf("Your amount is Rs.%f",amount);  
    }
    else if (units >=1000)
    {
        rate=3.5;
        amount=rate*units;
        printf("Your amount is Rs.%f",amount);
    }

    float surcharge;
    if (amount >= 500)
    {
        surcharge=(15.0/100.0)*amount;
        printf("The surcharge added is Rs.%f",surcharge);
        printf("The final bill to be paid is Rs.%f",(amount+surcharge));
    }
    
    return 0;
}