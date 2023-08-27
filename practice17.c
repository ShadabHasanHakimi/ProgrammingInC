#include<stdio.h> //for pyramid of star
main()
{
    int i,j,k;
    for(i=0;i<10;i++)
    {
        for(j=10;j>i;j--)
        {
            printf(" ");
        }
        for(k=0;k<i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
}