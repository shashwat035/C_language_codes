#include<stdio.h>
int main()
{
    float radius,height,pi=3.14,volume;
    printf("enter the radius of the cone:");
    scanf("%f",&radius);
    printf("enter the height of the cone;");
    scanf("%f",&height);

    volume=1.0/3.0*pi*radius*radius*height;
    printf("the volume of the cone is %f",volume);

    return 0;

}

