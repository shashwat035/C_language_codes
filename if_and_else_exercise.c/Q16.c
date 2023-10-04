#include<stdio.h>
int main()
{
    char character;
    printf("enter the character :");
    scanf("%c",&character);

    if (character>=65 && character<=90)
    {
        printf("%c is a CAPITAL alphabet",character);
    }
    else if (character>=97 && character<=122)
    {
        printf("%c is a small alphabet",character);
    }
    else
    {
        printf("%c is a special character",character);
    }

    return 0;
}
