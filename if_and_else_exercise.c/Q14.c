#include<stdio.h>
int main()
{
    float sideA,sideB,sideC;
    printf("enter the length three sides of a triangle :\n");
    scanf("%f%f%f",&sideA,&sideB,&sideC);

    if (sideA==sideB && sideB==sideC && sideA==sideC)
    {
        printf("the triangle is an equilateral triangle");
    }
    else if (sideA==sideB || sideB==sideC || sideA==sideC)
    {
        printf("the triangle is an isoceles triangle");
    }
    else 
    {
        printf("the triangle is a scalene triangle");
    }

    return 0;
}
