#include<stdio.h>
int main()
{
    int a=5;
    int *b=&a;
    printf("The value of a is %d\n",a);
    printf("The address of a is %d\n",&a);
    printf("The address of a is %d\n",b);
    printf("The value of a is %d\n",*b);
    printf("The address of b is %d\n",&b);
    printf("%d",*(&b));
    return 0;
}