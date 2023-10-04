#include<stdio.h>
#include<windows.h>
int main()
{
    for (int i=1 ; i<=10 ; i++)
    {
        printf(" %2d X %2d=%2d ",i,1,i*1);
        Sleep(1000);
        printf(" %2d X %2d=%2d ",i,2,i*2);
        Sleep(1000);
        printf(" %2d X %2d=%2d ",i,3,i*3);
        Sleep(1000);
        printf(" %2d X %2d=%2d ",i,4,i*4);
        Sleep(1000);
        printf(" %2d X %2d=%2d ",i,5,i*5);
        Sleep(1000);
        printf(" %2d X %2d=%2d ",i,6,i*6);
        Sleep(1000);
        printf(" %2d X %2d=%2d ",i,7,i*7);
        Sleep(1000);
        printf(" %2d X %2d=%2d ",i,8,i*8);
        Sleep(1000);
        printf("\n");
        Sleep(1000);
    } 

    return 0;
}
 