// Program to print table of any integer n
#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("what is the value of n\n"); // Taking input of integer
    scanf("%d", &n);
    printf("****Table of %d****\n", n);
    while (i <= 10) // printing table
    {
        printf("\t%d\n", i * n);
        i++;
    }
    return 0;
}