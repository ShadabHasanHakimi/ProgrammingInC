#include<stdio.h> //for inverted pyramid of star
main()
{
    int i,j,k;
    for(i=0;i<10;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(k=10;k>i;k--)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
}