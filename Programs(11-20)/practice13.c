#include<stdio.h> //for half pyramid of numbers
main()
{
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    getch();

}