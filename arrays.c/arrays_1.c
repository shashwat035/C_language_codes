#include <stdio.h>
int main() 
{
    //create an array to store marks of 5 subjects.
    int marks[5]; 
    int total = 0;
    float percentage;

    //input marks for 5 subjects.
    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Subject %d: \n", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    //percentage.
    percentage = (float)total / 5.0;

    //the total and percentage.
    printf("total marks are : %d\n",total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}