#include<stdio.h>
int main()
{
    //input the size and elements of the array//
    int s;
    printf("enter the size of the array :");
    scanf("%d",&s);
    int array[s];
    int evenCount = 0;
    int oddCount = 0;

    printf("enter the elements of the array :\n");
    for (int i = 0; i < s; i++)
    {
        scanf("%d",&array[i]);
    }
    
    //logic used to calculate the number of even and odd digits//
    for (int i = 0; i < s; i++) 
    {
        if (array[i] % 2 == 0) 
        {
            evenCount++;
        } 
        else 
        {
            oddCount++;
        }
    }

    printf("Number of even integers: %d\n", evenCount);
    printf("Number of odd integers: %d\n", oddCount);

    return 0;
}
