#include <stdio.h>

int main() 
{
    int numbers[10];
    int i, searchNumber, foundIndex = -1;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) 
    {
        scanf("%d", &numbers[i]);
    }

    printf("Enter a number to search for: ");
    scanf("%d", &searchNumber);

    for (i = 0; i < 10; i++)
    {
        if (numbers[i] == searchNumber) 
        {
            foundIndex = i;
            break; 
        }
    }

    if (foundIndex != -1) 
    {
        printf("The number %d was found at index %d\n", searchNumber, foundIndex);
    } 
    else 
    {
        printf("The number %d was not found in the array\n", searchNumber);
    }

    return 0;
}
