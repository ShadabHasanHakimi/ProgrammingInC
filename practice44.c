#include<stdio.h>
int main()
{
    char name[20], fullname[20];
    // printf("Enter your name : \n");
    // scanf("%s",&name);
    // printf("Your name is %s",name);
    printf("Enter your name : \n");
    gets(fullname);
    printf("Your name is %s",fullname);
    return 0;
}
