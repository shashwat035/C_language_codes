#include<stdio.h>
int main()
{
    float b,h,area;
    printf("enter the base of the triangle:");
    scanf("%f",&b);
    printf("enter the height of the triangle:");
    scanf("%f",&h);

    area=(1.0/2.0)*b*h;

    printf("area of the triangle is %f",area);

    return 0;
}
