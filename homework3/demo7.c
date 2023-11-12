#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int judge = 1;
    int len,N;
    scanf("%d %d",&len,&N);
    char nu[10000];
    scanf("%s",nu);
    for (int i = 0;i <= len-1;i++)
    {
        if (N <= 10)
        {
            if (nu[i]-48 >= N) {judge = 0;}
            
        }
        else if (N > 10)
        {
            if (nu[i] >= N+55) {judge = 0;}
        }
    }
    if (judge == 0) {printf("Error");}
    else
    {
        char *endptr;
        int num = strtol(nu, &endptr, N);
        printf("%d\n", num);
        return 0;
    }
}