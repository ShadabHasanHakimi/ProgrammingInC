// #include<stdio.h> //program to find table of 5 and storing in array
// int main()
// {
//     int a[10],i;
//     for(i=0;i<10;i++)
//     {
//         a[i]=5*(i+1);
//     }
//     for(i=0;i<10;i++)
//     {
//         printf("%d\n",a[i]);
//     }    
//     return 0;
// }
#include<stdio.h> //program to find table of n and storing in array
int main()
{
    int n,a[10],i;
    printf("Enter a number to find its table.\n");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        a[i]=n*(i+1);
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }    
    return 0;
}
