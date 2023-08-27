#include<stdio.h>
int main()
{
    int marks;
    printf("what is your marks obtained \n");
    scanf("%d", &marks);
    if(marks<=100 && marks>=90){
        printf("You have obtained B grade.");     
    }
    else if(marks<80 && marks>=70){
        printf("You have obtained C grade.");
    }
    else if(marks<70 && marks>=60){
        printf("You have obtained D grade.");
    }
   else if(marks<60){
    printf("You have obtained F grade, i.e., you have failed in the exam!!! ");
   }
   
    return 0;
}

