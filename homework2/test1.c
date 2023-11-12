#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[10000];
    int brr[10000] = {0};
    for (int i = 0;i <= (2*n-2);i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0;i <= (2*n-2);i++)
    {
        if (brr[arr[i]] == 0) {brr[arr[i]] = 1;}
        else if (brr[arr[i]] == 1) {brr[arr[i]] = 2;}
    }
    for (int i = 0;i <= (2*n-2);i++)
    {
        if (brr[arr[i]] == 1) 
        {
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}