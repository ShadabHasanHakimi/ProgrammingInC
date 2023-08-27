#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr=&arr[0];
    printf("Address of arr[0] : %u\n",ptr);
    printf("value of arr[0] : %d\n",*ptr);
    ptr=ptr+2;
    printf("Address of arr[2] : %u\n",ptr);
    printf("value of arr[2] : %d\n",*ptr);

    return 0;
}
