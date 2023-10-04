#include<stdio.h>
int main()
{
    int numbers[10],min;
    printf("enter the elements of the array :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&numbers[i]);
    }

    min=numbers[0];

    for (int i = 0; i < 10; i++)
    {
        if(numbers[i]<min)
        {
            min=numbers[i];
        }
    }
    printf("the minimum number is : %d",min);
    return 0;
}