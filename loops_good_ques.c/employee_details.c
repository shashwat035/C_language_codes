#include <stdio.h>
#include "Data.h"

int main()
{
    int n=10;
    
    Employee employee[n];
    printf("\t========== Enter the following details ==========\t\n");

    for (int i = 0; i < n; i++)
    {
        printf(" Employee %d : \n",i+1);
        printf("Enter your employee id :");
        scanf("%[^\n]d",&employee[i].id);
        printf("Enter your name :");
        fgets(employee[i].name,50,stdin);
        printf("Enter your salary :");
        scanf("%1f",&employee[i].salary);
        printf("Enter your department :");
        fgets(employee[i].department,50,stdin);
        printf("Enter your permanent address :");
        fgets(employee[i].permanent_address,100,stdin);
        printf("Enter your local address :"); 3
        fgets(employee[i].local_address,100,stdin);
        printf("\n\n");
    }

    printf("\t========== The employe details are as follows ==========\t\n");
    for (int i = 0; i < n; i++)
    {
        printf("Id \t: ");
        printf("%d \n",employee[i].id);
        printf("Name \t: ");
        printf("%s \n",employee[i].name);
        printf("Department \t: ");
        printf("%s \n",employee[i].department);
        printf("Salary \t: ");
        printf("%.2lf \n",employee[i].salary);
        printf("Permanent address \t:",employee[i].permanent_address);
        printf("%s",employee[i].permanent_address);
        printf("Local address \t:");
        printf("%s",employee[i].local_address);
        printf("\n");
    }

    return 0;
}