#include<stdio.h>
int main()

// this program is to calculate the differnce between the maximum number in an array and the minimum number //

{
    //intput the size and then the elements of the array//
    int s,max,min,difference;
    printf("enter the size of the array :");
    scanf("%d",&s);
    int array[s];
    printf("enter the elements of the array :\n");
    for (int i = 0; i < s; i++)
    {
        scanf("%d",&array[i]);
    }

    //asume the max and min to be zero//
    max=0;
    min=0;

    for (int i = 0; i < s; i++)
    {
        if(array[i]<min)
        {
            array[i]=min;
        }
        if(array[i]>max)
        {
            array[i]=max;
        }
    }

    //difference of max and min//
    difference=max-min;

    printf("the difference of the maximum number %d and minimum number %d is %d.",max,min,difference);
    
    return 0;
}
