#include <stdio.h>

int main()
{
    char grade;
    printf("Enter your grade (A, B, C, D, F): ");
    scanf(" %c", &grade);

    //second method is using the switch rather than the ASCII values which is much tough//
    switch (grade) 
    {
        case 'A':
        case 'a':
            printf("Excellent\n");
            break;
        case 'B':
        case 'b':
            printf("Good\n");
            break;
        case 'C':
        case 'c':
            printf("Average\n");
            break;
        case 'D':
        case 'd':
            printf("Poor\n");
            break;
        case 'F':
        case 'f':
            printf("Fail\n");
            break;
        default:
            printf("Invalid  grade\n");
    }

    return 0; 
}  