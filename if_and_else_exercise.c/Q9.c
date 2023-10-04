#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the x and y coordinates :\n");
    scanf("%d%d",&x,&y);
    if (x==0 && y==0)
    {
        printf("(x,y) point is the origin");
    }
    else if (x>0 && y>0)
    {
        printf("the point (x,y) lies in the first quadrant");
    }
    else if (x>0 && y<0)
    {
        printf("the point (x,y) lies in the fourth quadrant");
    }   
    else if (x<0 && y<0)
    {
        printf("the point (x,y) lies in the third quadrant");
    }
    else if (x<0 && y>0)
    {
        printf("the point (x,y) lies in the first quadrant");
    }
    else if (x==0)
    { 
        if (x==0)
        {
             printf("the point (x,y) lies on y axis ");
        }
        if (y==0)
        {
            printf("the point (x,y) lies on x axis");
        }
    }

    return 0;
} 