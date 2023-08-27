#include<stdio.h> //sum of upper triangle of two matrices
main()
{
    int a[3][3],b[3][3],i,j,k,sum,mul=0;
    printf("Enter elements of first matrix.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Enter the elements of second matrix.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&b[i][j]);
    }
    printf("\nThe multiplication of first and second matrix is =\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            mul=mul+a[i][k]*b[k][i];
        }
        printf("%d\t",mul);
    }
    getch();
}
