#include<stdio.h>
main()
{
    int vol, l, b, h;
    printf("enter the value of length\n");                                                          
    scanf("%d", &l);
    printf("enter the value of breadth\n");
    scanf("%d", &b);
    printf("enter the value of height\n");
    scanf("%d", &h);
    vol=l*b*h;
    printf("the value of volume of given cuboid is %d",vol);
    getch();
}