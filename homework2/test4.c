#include <stdio.h>
int func(int k)
{
    if (k%2 != 0) {return (3*k+1);}
    else {return (k/2);}
}

int main()
{
    int n;
    int k = 1;
    scanf("%d",&n);
    int arr[1000] = { n };
    while (1)
    {
        arr[k] = func(n);
        n = func(n);
        if (arr[k] == 1) {break;}
        k++;
    }
    int max = arr[0];
    for (int i = 0;i <= k;i++)
    {
        if (arr[i] >= max) {max = arr[i];}
    }
    printf("%d %d",(k),max);
    return 0;
}