#include <stdio.h>

int isStrongNumber(int number) 
{
    int originalNumber = number;
    int sum = 0;

    while (number != 0) 
    {
        int digit = number % 10;
        int factorial = 1;

        // Calculate factorial of the digit
        for (int i = 1; i <= digit; ++i) 
        {
            factorial *= i;
        }

        sum += factorial;
        number /= 10; 
    }

    return sum == originalNumber;
}

int main()              
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isStrongNumber(number))
        printf("%d is a strong number.\n", number);
    else
        printf("%d is not a strong number.\n", number);

    return 0;
}

//list of some of the strong numbers 1,2,145........//