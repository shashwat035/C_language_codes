#include<stdio.h>
int main()
{
    int num,i,factorial=1;
    printf("enter he number whose factorial is to be calculated :");
    scanf("%d",&num);

     for(i=1;i<=num;i++)
    {    
      factorial=factorial*i;    
    }    
      
    printf("Factorial of %d is: %d",num,factorial);    
     return 0;  
}   
