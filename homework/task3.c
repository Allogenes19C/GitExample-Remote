#include <stdio.h>
#include <math.h>
int main(void)
{
    double pi,pi2;
    double k;
    k = 640320;
    pi = log(k*k*k+744)/sqrt(163);
    pi2 = 4*atan(1.0/5.0) - atan(1.0/239.0);
    printf("%.15f\n",pi);
    printf("%.15f\n",pi2);
    return 0;
}