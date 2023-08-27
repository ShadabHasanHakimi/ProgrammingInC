#include<stdio.h> //for hollow half pyramid of stars
main()
{
    int i,j,k;
        for(i=0;i<10;i++)
        {
            for(j=0;j<i;j++)
            {
                if(j==0 || j==i-1)
                printf("* ");
                else if(i==9)
                printf("* ");
                else
                printf("  ");
            }
            printf("\n");
        }
        getch();
}