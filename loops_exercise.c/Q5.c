#include<stdio.h>
int main()
{
    int i,square,start,end;
    printf("enter the starting point of the range:");
    scanf("%d",&start);
    printf("enter the ending range of the range:");
    scanf("%d",&end);

    for(i=start ; i<=end ; i++)
    {
        printf("The number is: %d and the cube of %d is: %d\n",i,i,(i*i*i));
    }

    return 0;
}