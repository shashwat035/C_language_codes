#include <stdio.h>
int main() 
{
    int size1, size2;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    int arr1[size1];
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < size1; i++) 
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int arr2[size2];
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < size2; i++) 
    {
        scanf("%d", &arr2[i]);
    }

    printf("Common elements between the two arrays are: ");
    for (int i = 0; i < size1; i++) 
    {
        for (int j = 0; j < size2; j++) 
        {
            if (arr1[i] == arr2[j]) 
            {
                printf("%d ", arr1[i]);
                break; // Break inner loop once a common element is found //
            }
        }
    }

    return 0;
}
