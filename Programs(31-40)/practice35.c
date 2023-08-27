#include<stdio.h>
struct employee
{
    char name[20];
    int age;
    int salary;
};
main()
{
    int i;
    struct employee details[3];
    for(i=0;i<3;i++)
    {
        printf("Enter your name.\n");
        scanf("%s",&details[i].name);
        printf("Enter your age.\n");
        scanf("%d",&details[i].age);
        printf("Enter your salary.\n");
        scanf("%d",&details[i].salary);
    }
    for(i=0;i<3;i++)
    {
        printf("Your name = %s\n",details[i].name);
        printf("Your age = %d\n",details[i].age);
        printf("Your salary = %d\n",details[i].salary);
    }
    getch();
}
