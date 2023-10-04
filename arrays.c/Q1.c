#include<stdio.h>
int main()
{
    int numbers[10],max;
    printf("enter the elements of the array :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&numbers[i]);
    }

    max=numbers[0];

    for (int i = 0; i < 10; i++)
    {
        if(numbers[i]>max)
        {
            max=numbers[i];
        }
    }
    printf("the maximum number is : %d",max);
    return 0;
}