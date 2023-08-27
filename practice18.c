#include<stdio.h> //for pyramid of numbers
main()
{
    int i,j,k,l;
    for(i=0;i<10;i++)
    {
        for(j=10;j>i;j--)
        {
            printf(" ");
        }
        for(k=0;k<1;k++)
        {
            for(l=0;l<i;l++)
            {
                printf("%d ",l);
            }
        }
        printf("\n");
    }
    getch();
}