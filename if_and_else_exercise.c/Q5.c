#include<stdio.h>
int main()
{
    int age;
    printf("enter your age :\n");
    scanf("%d",&age);

    if (age >= 18)
    {
        printf("YES, you are eligible to vote");
    }

    else
    {
        printf("SORRY, you are not eligible to vote");
    }

    return 0;
}