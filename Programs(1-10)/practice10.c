#include<stdio.h>
main()
{
    int a, b, c;
    printf("enter the values of three numbers=\n");
    scanf("%d%d%d", &a, &b, &c);
    /*if(a>b)
    {
        if(a>c)
        printf("%d is greatest", a);
    }
    if(b>c)
    {
        if(b>a)
        printf("%d is greatest", b);
    }
    if(c>a)
    {
        if(c>b)
        printf("%d is greatest", c);
    }*/
    if(a>b)
    {
        if(a>c)
        printf("%d is greatest", a);
        else
        printf("%d is greatest", c);
    }
     else
    {
        if(b>c)
        printf("%d is greatest", b);
        else
        printf("%d is greatest", c);
    }
    getch();
}