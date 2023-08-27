#include<stdio.h>
main()
{
    int i,dec,bin;
    printf("Enter a decimal number.\n=");
    scanf("%d",&dec);
    while(dec!=0)
    {
        bin=dec%2;
        printf("%d",bin);
        dec=dec/2;
    }
    getch();
}