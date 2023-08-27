#include<stdio.h>
main()
{
    int l, b, h, area;
    printf("enter the value of length, breadth and height\n");
    scanf("%d%d%d",&l,&b,&h);
    area=(2*l*b)+(2*b*h)+(2*l*h);
    printf("the total surface area of given cuboid is %d", area);
    getch();
}