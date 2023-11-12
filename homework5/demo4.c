#include <stdio.h>
#include <math.h>
int judge(int x)
{
    int flag = 1;
    for (int i = 2; i <= sqrt(x + 0.5); i++) 
    {
        if (x % i == 0) {flag = 0;}
    }
    return flag;
}
int break_num_add(int num)
{
    int res = 0;
    while (num > 0) 
    {
        res = res*10 + num%10;
        num /= 10;
    }
    return res;
}
int main()
{
    int n = 0;
    scanf("%d",&n);
    int count = 0;
    for (int i = 2; i <= n; i++) 
    {
        if (judge(i) && judge(break_num_add(i))) {count++;}
    }
    printf("%d",count);
    return 0;
}