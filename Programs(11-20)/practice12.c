#include<stdio.h>
main()
{
    int i,n,fac=1;
    printf("Enter a number for finding its factorial.\n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    printf("Factorial of %d is %d.",n,fac);
    getch();
}