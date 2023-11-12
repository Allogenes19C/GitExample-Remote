#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int a,b,c,d,e;
    a = num/50;
    b = (num - 50*a)/20;
    c = (num - 50*a - 20*b)/10;
    d = (num - 50*a -20*b -10*c)/5;
    e = num - 50*a -20*b -10*c -5*d;
    printf("%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e);
    return 0;
}