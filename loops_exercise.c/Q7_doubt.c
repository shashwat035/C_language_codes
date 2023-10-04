#include<stdio.h>
int main()
{
    int start,end;
    printf("enter the starting and ending of the range:\n");
    scanf("%d\n%d\n",&start,&end);

    for (start=1 ; start<=end ;start++)
    {
        printf("%d*%d=%d\n",start,end,start*end);
    }

    return 0;
}