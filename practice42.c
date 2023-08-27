#include<stdio.h>
typedef struct student //use of typedef
{
    char name[15];
    int rollno, marks;
}stu;
int main()
{
    stu s[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter name of student %d:\n",i+1);
        scanf("%s",&s[i].name);
        printf("Enter roll no. of student %d:\n",i+1);
        scanf("%d",&s[i].rollno);
        printf("Enter marks of student %d: \n",i+1);
        scanf("%d",&s[i].marks);
    }
    for(i=0;i<3;i++)
    {
        printf("Name of student %d = %s\n",i+1,s[i].name);
        printf("Roll no. of student %d = %d\n",i+1,s[i].rollno);
        printf("Marks of student %d = %d",i+1,s[i].marks);
    }
    return 0;
}