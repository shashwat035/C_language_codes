#include<stdio.h>
int main()
{
    float h,pi=3.14,r,volume;
    printf("enter the height of the cylinder:");
    scanf("%f",&h);
    printf("enter the radius of the cylinder:");
    scanf("%f",&r);

    volume=pi*r*r*h;

    printf("the volume of the cylinder is : %f",volume);

    return 0;
}


    

