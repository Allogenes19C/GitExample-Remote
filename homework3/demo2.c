#include <stdio.h>
int main()
{
    int arr[2000] = {0};
    int n;
    scanf("%d",&n);
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j*i <= n;j++)
        {
            if (arr[i*j] == 1) {arr[i*j] = 0;}
            else {arr[i*j] = 1;}
        }
    }
    for (int i = 1;i <= n;i++)
    {
        if (arr[i] == 1) {printf("%d ",i);}
    }
    return 0;
}