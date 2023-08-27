#include<stdio.h> //for half pyramid of numbers
main()
{
    int i,j,k;
    for(i=0;i<10;i++)
    {
        for(j=0;j<1;j++)
        {
            for(k=0;k<=i;k++)
            {
                printf("%d ",k);
            }
        }
        printf("\n");
    }
    getch();
}