#include<stdio.h>
main()
{
    int r, h;
    float vol;
    printf("enter the value of radius and height in order to find the volume of the cylinder\n");
    scanf("%d%d", &r, &h);
    vol=3.14*r*r*h;
    printf("the volume of the cylinder is %f", vol);
    getch();
}