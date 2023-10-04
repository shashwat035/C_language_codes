 #include<stdio.h>
 int main()
 {
    float maths,phy,chem,total;
    printf("enter your marks in maths :");
    scanf("%f",&maths);
    printf("enter your marks in phy :");
    scanf("%f",&phy);
    printf("enter your marks in chem :");
    scanf("%f",&chem);

    printf("total marks in all is : %f\n",(maths+phy+chem));

    if (maths>=65 && phy>=55 && chem>=50)
    {
        if ((maths+phy+chem)>=190 || (maths+phy)>=140)
        {
            printf("CONGRATS ! you are eligible for the course");
        }
        else
        {
            printf("SORRY you are not eligible for the course");
        }
    }
    else
    {
        printf("SORRY you are not eligible for the course");
    }
    
    return 0;
 }