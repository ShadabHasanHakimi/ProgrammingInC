#include<stdio.h>
int main()
{
    void sum(int,int);
    int a=4, b=3;
    sum(a,b);
    return 0;
}
void sum(int x, int y)
{
    int z;
    z=x+y;
    x=7;
    y=9;
    printf("Sum= %d",z);
}