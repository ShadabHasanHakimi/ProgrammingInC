#include<stdio.h>
main()
{
    float ctof(float);
    float c,f;
    printf("Enter temperature in celcius.\n");
    scanf("%f",&c);
    f=ctof(c);
    printf("%.2f",f);
    getch();
}
float ctof(float cel)
{
    float fah;
    fah=(cel*(1.8)+32);
    return fah;
}