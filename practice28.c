#include<stdio.h> //sum of first row of two matrices
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
    printf("\nThe sum of first row of matrix first and second is =\n");
    for(j=0;j<3;j++)
    {
        sum=a[0][j]+b[0][j];
        printf("%d\t",sum);
    }
    getch();
}
