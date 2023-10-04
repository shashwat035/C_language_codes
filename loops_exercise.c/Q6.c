#include<stdio.h>
int main()
{
     int n,m;
     printf("enter the number (table to be calculated) :");
     scanf("%d",&n);
     for ( m=1 ; m<=10 ; m++ )
     {
        printf("%d*%d=%d\n",n,m,n*m);
     }

     return 0;
}