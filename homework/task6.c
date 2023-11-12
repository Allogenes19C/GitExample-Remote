#include <stdio.h>
int main()
{
    const double G = 6.674E-11;
    const double M = 77.15;
    double m,R;
    scanf("%lf %lf",&m,&R);
    double result;
    result = G*M*m/R/R;
    printf("%.3e",result);
    return 0;
}