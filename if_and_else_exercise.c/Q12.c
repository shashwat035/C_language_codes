#include<stdio.h>
int main()
{
    int rollno;
    float m1,m2,m3,total,percentage;
    
    printf("\t\t========== Enter the following details ==========\t\t\n");

    printf("enter your rollno:");
    scanf("%d",&rollno);

    printf("enter the 3 subjects marks:\n ");
    scanf("%f%f%f",&m1,&m2,&m3);
    
    total=m1+m2+m3;
    percentage=total/3.0;
    printf("\t\t========== Your result ==========\t\t\n");

    printf(" Total=%f\n Percentage=%f\n ",total,percentage);

    if (percentage<=100 && percentage>90)
    { 
        printf("Division: First");
    }
    else if (percentage<=90 && percentage>80)
    {
        printf("Division: Second");
    }
    else if (percentage<=80 && percentage>70)
    {
        printf("Division: Third");
    }
    else if (percentage<=70 && percentage>60)
    {
        printf("Division: Fourth");
    }
    else if (percentage<=60 && percentage<30)
    {
        printf("Division: Fifth");
    }
    else 
    {
        printf("Congrats you have FAILED ");
    }

    return 0;
}