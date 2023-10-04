#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void insert(FILE *fp);
void display(FILE *fp);
void del(FILE *fp);
void modify(FILE *fp); 
int search(FILE *fp,char *name);
void list(FILE *fp);
struct employee
{
    char name[50];
    int salary;
    char department;
    int empID[5];
};

int main()
{
    int choice;
}
