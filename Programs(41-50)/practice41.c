#include<stdio.h> //program to find number of positive integers in an array
int main()
{
    int countnum(int *);
    int a[5],i;
    printf("Enter any five numbers.\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Your entered numbers have %d positive numbers.",countnum(a));
    return 0;
}
int countnum(int *b)
{
    int num=0,j;
    for(j=0;j<5;j++)
    {
        if(b[j]>0)
            num++;
    }
    return num;
}