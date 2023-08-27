#include<stdio.h> //for hollow half inverted triangle of star
main()
{
    int i, j;
    for(i=0;i<10;i++)
    {
        for(j=10;j>i;j--)
        {
            if(j==10 || j==i+1)
            printf("* ");
            else if(i==0)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    getch();
}