#include <stdio.h>

int main()
{
    int n;
    int i;
    int num = 10007;
    long long ans = 0;
    scanf("%d",&n);
    long long res = 1;
    for(int i = 1; i <= n; i++) 
    {
        res *= i;
        res = res % num;
        ans = (ans + res) % num;
    }
        printf("%d",ans); 
    return 0;
}