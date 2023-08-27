//  Program to find greatest number between four entered numbers
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("what is your first no.\n"); // Taking entries
    scanf("%d", &a);
    printf("what is your second no.\n");
    scanf("%d", &b);
    printf("what is your third no.\n");
    scanf("%d", &c);
    printf("what is your fouth no.\n");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    { // Procedure to find greatest number
        printf("%d is the greatest no.", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d is the greatest no.", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("%d is the greatest no.", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("%d is the greatest no.", d);
    }
    else
    {
        printf("all no. are equal");
    }
    return 0;
}