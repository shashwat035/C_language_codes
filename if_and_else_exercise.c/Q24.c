#include<stdio.h>
int main()
{
    int num_month;
    printf("enter the number of the month :");
    scanf("%d",&num_month);

    switch (num_month)
     {
        case 1:
                printf("January\n");
                printf("the number of days is 31");
                break;
        case 2:
                printf("February\n");
                printf("the number of days is 28 and 29 in leap years");
                break;
        case 3:
                printf("March\n");
                printf("the number of days is 31");
                break;
        case 4:
                printf("April\n");
                printf("the number of days is 30");
                break;
        case 5:
                printf("May\n");
                printf("the number of days is 31");
                break;
        case 6:
                printf("June\n");
                printf("the number of days is 30");
                break;
        case 7:
                printf("July\n");
                printf("the number of days is 31");
                break;
        case 8:
                printf("August\n");
                printf("the number of days is 31");
                break;
        case 9:
                printf("September\n");
                printf("the number of days is 30");
                break;
        case 10:
                printf("October\n");
                printf("the number of days is 31");
                break;
        case 11:
                printf("November\n");
                printf("the number of days is 30");
                break;
        case 12:
                printf("December\n");
                printf("the number of days is 31");
                break;
    }

    return 0;
}
       
