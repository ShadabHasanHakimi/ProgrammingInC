// program to find sum of whole table of any integer
#include <stdio.h>
int main()
{
    int i = 1, n, sum = 0;
    printf("Enter any integer to find sum of it's table!!! \n");
    // Taking value of the integer 
    scanf("%d", &n);
    while (i <= 10) // Finding the sum of table of the integer
    {
        sum += i * n;
        i++;
    }
    printf("the value is %d\n", sum);   // printing the sum
    return 0;
}