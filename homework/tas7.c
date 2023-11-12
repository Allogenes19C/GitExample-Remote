#include <stdio.h>
#include <math.h>
int main()
{
    int p,q;
    scanf("%d %d",&p,&q);
    double x1;
    x1 = cbrt(-q/2.0+sqrt(pow(q/2.0,2)+pow(p/3.0,3)))+cbrt(-q/2.0-sqrt(pow(q/2.0,2)+pow(p/3.0,3)));
    printf("%.3f",x1);
    return 0;
}