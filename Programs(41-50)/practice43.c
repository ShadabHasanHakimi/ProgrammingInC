#include<stdio.h> //comparison of timestamp
typedef struct timestamp
{
    int date, month, year, hour, min, sec;
}timestamp;
int main()
{
    int compare (timestamp , timestamp);
    timestamp n1,n2;
    printf("Enter timestamp one in the format of date, month>year>hour>min>sec : \n");
    scanf("%d%d%d%d%d%d",&n1.date,&n1.month,&n1.year,&n1.hour,&n1.min,&n1.sec);
    printf("Enter timestamp second in the format of date, month>year>hour>min>sec : \n");
    scanf("%d%d%d%d%d%d",&n2.date,&n2.month,&n2.year,&n2.hour,&n2.min,&n2.sec);
    printf("The comparison returns : %d",compare(n1,n2));
    return 0;
}
int compare (timestamp N1, timestamp N2)
{
    if(N1.year>N2.year)
    {
        return 1;
    }
    else if(N1.year<N2.year)
    {
        return -1;
    }
    else if(N1.month>N2.month)
    {
        return 1;
    }
    else if(N1.month<N2.month)
    {
        return -1;
    }
    else if(N1.date>N2.date)
    {
        return 1;
    }
    else if(N1.date<N2.date)
    {
        return -1;
    }
    else if(N1.hour>N2.hour)
    {
        return 1;
    }
    else if(N1.hour<N2.hour)
    {
        return -1;
    }
    else if(N1.min>N2.min)
    {
        return 1;
    }
    else if(N1.min<N2.min)
    {
        return -1;
    }
    else if(N1.sec>N2.sec)
    {
        return 1;
    }
    else if(N1.sec<N2.sec)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}