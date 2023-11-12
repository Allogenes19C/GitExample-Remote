#include <stdio.h>
#define N 10000
int v[N];
int cnt = 0;
void calc(int n) 
{

    for(int i = 2; i <= n; i++) 
    {
        if(v[i] == 1) {continue;}
        cnt++;
        v[i] = 1;
        for(int j = 2; i * j <= n ; j++) {v[i*j] = 1;}
    }
}


int main() 
{
    int n;
    scanf("%d", &n);
    calc(n);
    printf("%d", cnt);
    return 0;
}