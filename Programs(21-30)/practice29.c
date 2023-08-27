#include<stdio.h> //sum of second row of two matrices
main()
{
    int a[3][3],b[3][3],i,j,sum;
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
    printf("\nThe sum of second row of matrix first and second is =\n");
    for(j=0;j<3;j++)
    {
        sum=a[1][j]+b[1][j];
        printf("%d\t",sum);
    }
    getch();
}
