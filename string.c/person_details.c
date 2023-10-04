#include<stdio.h>
#include <string.h>

int main()
{
    char name[20],address[100],phone[13];
    printf("enter your name :\n");
    fgets(name,20,stdin);
    printf("enter you address :\n");
    fgets(address,100,stdin);
    printf("enter your phone number :\n");
    fgets(phone,13,stdin);

    printf("\n hello %s your personal details are as follows :\n",name);
    printf("\t%s",name);
    printf("\t%s",address);
    printf("\t%s",phone);
    
    return 0;
}
