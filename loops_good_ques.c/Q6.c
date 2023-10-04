#include<stdio.h>
int main()
{
    int num,evenSum=0,n;
    printf("Enter any number: ");
    scanf("%d", &num);
    while(num>0)
    {
        n = num%10;
        if(n%2==0)
        {
            evenSum = evenSum + n;
        } 
    }
    printf("\nSum of Even Digit = %d", evenSum);
    return 0;
}