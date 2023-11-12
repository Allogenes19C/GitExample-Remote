#include <stdio.h>
#include <math.h>
int func(int num,int k)
{
    int res = 0;
    for (int i = 0;i < k;i++)
    {
        res += num*pow(10,i);
    }
    return res;
}
int main()
{
    int n,t;
    scanf("%d%d",&n,&t);
    int sum = 0;
    for (int i = 1;i <= n;i++)
    {
        sum += func(t,i);
    }
    printf("%d",sum);
    return 0;
}