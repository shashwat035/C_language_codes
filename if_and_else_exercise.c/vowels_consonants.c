#include<stdio.h>
int main()
{
    char ch;
    printf("enter the alphabet :\n");
    scanf("%c",&ch);

    if (ch=='A' || ch=='E' ||ch=='I' ||ch=='O' ||ch=='U'||ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u')
    {
        printf("the charactrer given is a vowel");
    }

    else 
    {
        printf("the character is a consonant");
    }

    return 0;
}

