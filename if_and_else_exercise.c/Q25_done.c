#include<stdio.h>
#include<math.h>
int main()
{
    printf("1.Square\n");
    printf("2.Rectangle\n");
    printf("3.Circle\n");
    printf("4.Cube\n");

    int choice;
    float area;
    printf("enter choice:");
    scanf("%d",&choice);

    if (choice==1)
    {
        float side;
        printf("enter the side");
        scanf("%f",&side);
        area=side*side;
    }
    else if (choice==2)
    {
        float length,breadth;
        printf("enter the length and breadth:\n");
        scanf("%f%f",&length,&breadth);
        area=length*breadth;
    }
    else if (choice==3)
    {
        float radius;
        printf("enter the radius:");
        scanf("%f",&radius);
        area=3.14*radius*radius;
    }
    else if (choice==4)
    {
        float side;
        printf("enter the side of the cube:");
        scanf("%f",&side);
        area=side*side*side;
    }
    else 
    {
        printf(" INVALID INPUT ");
    }

    printf("the area of the geoetrical shape is: %f",area);
    return 0;
}
 