#include <stdio.h>

int main() 
{
    int sourceArray[10];
    int destinationArray[10];
    int i;
    printf("enter the 10 elements of the array :\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&sourceArray[i]);
    }

    for (i = 0; i < 10; i++) 
    {
        destinationArray[i] = sourceArray[i];
    }

    printf("Elements in destinationArray: ");
    for (i = 0; i < 10; i++) 
    {
        printf("%d ", destinationArray[i]);
    }
    printf("\n");

    return 0;
}  