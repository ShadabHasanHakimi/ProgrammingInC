#include<stdio.h> //for hollow diamond
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
            if(k==0 || k==i-1)
            printf("* ");
            else
            printf("  ");
        }
        
        printf("\n");
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(k=10;k>i;k--)
        {
            if(k==10 || k==i+1)
            printf("* ");
            else
            printf("  ");
        }
        
        printf("\n");
    }
    getch();
}