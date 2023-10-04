#include<stdio.h>
int main()
{
    int height;
    printf("enter your height in centimeters :");
    scanf("%d",&height);

    if (height>170)
    {
        printf("you are tall");
    }
    else if (height<=170 && height>150)
    {
        printf("you have average height");
    }
    else if (height<=150)
    {
        printf("you are a dwarf");
    }

    return 0;
}
