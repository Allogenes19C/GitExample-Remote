#include <stdio.h>
int main()
{
    char month[15];
    char weekday[15];
    int day,hour,minute,second,year;
    scanf("%s %d %4d %s %d %d %d",month,&day,&year,weekday,&hour,&minute,&second);
    printf("%.3s %.3s %d %.2d:%.2d:%.2d %.4d",weekday,month,day,hour,minute,second,year);
    return 0;
}