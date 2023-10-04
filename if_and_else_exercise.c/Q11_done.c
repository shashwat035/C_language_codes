#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,posRoot,negRoot;
    printf("enter the values of a,b and c :\n");
    scanf("%f%f%f",&a,&b,&c);

    posRoot=(-b+sqrt(b*b-4*a*c))/2.0*a;
    negRoot=(-b-sqrt(b*b-4*a*c))/2.0*a;

    printf("Positive: %f : %f\n",posRoot,negRoot); 

    if (posRoot>0 && negRoot>0) 
    {
        printf("Real roots");
    }
    else if (posRoot<0 && negRoot<0)
    {
        printf("Imaginary roots");
    }
    else 
    {
        printf("Roots are complex so no solution");
    }

    return 0; 
}  
