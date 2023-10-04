#include<stdio.h>
int main()
{
    float angleA,angleB,angleC;
    printf("enter the three angles of the triangle :\n");
    scanf("%f%f%f",&angleA,&angleB,&angleC);

    if ((angleA+angleB+angleC)==180)
    {
        printf("Yes the triangle can be formed");
    }
    else
    {
        printf("The triangle is not valid");
    }

    return 0;
}