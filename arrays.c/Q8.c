#include<stdio.h>
int main()
{
    //giving variables to the sizes of the arrays//
    int size1,size2,isEqual,i,j,k;
    printf("enter the size of both the arrays :\n");
    scanf("%d%d",&size1,&size2);
    int array1[size2],array2[size1];

    //if the size of the arrays is not same then they are not equal//
    if (size1 != size2)
    {
        printf("the arrays are not equal\n");
        isEqual=0;
        return 0;
    }

    //if the length is equal then we ask for the elements of the array//
    printf("enter the elements of array 1 :\n ");
    for ( i = 0; i < size1; i++)
    {
        scanf("%d",&array1[i]);
    }
    
    printf("enter the elements of array 2 :\n ");
    for ( j = 0; j < size2; j++)
    {
        scanf("%d",&array1[j]);
    }

    
    
    for ( k = 0; k < size1; k++)
    {
        if(array1[i]==array2[j])
        {
            isEqual=0;
            break; 
        }
    }
    

    //to check the equality of the arrays by checking very element//
    if (isEqual) 
    {
        printf("The arrays are equal.\n");
    } 
    else 
    {
        printf("The arrays are not equal.\n");
    }

    return 0;
}
