#include <stdio.h>          
//program to calculate percentage
int main()
{
    float a,b,c,d,e;        //Declaring variables
    printf("what is your marks obtained in maths\n",a);
    scanf("%f",&a);         //Taking marks of first subject

    printf("what is your marks obtained in science\n",b);
    scanf("%f",&b);         //Taking marks of second subject

    printf("what is your marks obtained in social science\n",c);
    scanf("%f",&c);         //Taking marks of Third subject

    printf("what is your marks obtained in hindi\n",d);
    scanf("%f",&d);         //Taking marks of fourth subject

    printf("what is your marks obtained in english\n",e);
    scanf("%f",&e);         //Taking marks of fifth subject

    printf("your percentage in these subjects is %f\n",(a+b+c+d+e)/5);      //Printing Percentage
    return 0;
}