#include <stdio.h>
#define N 100
int main()
{
    int n,m,t = 0;
    scanf("%d%d%d",&n,&m,&t);
    int arr[N] = {0};
    int brr[N] = {0};
    int crr[N] = {0};
    for (int i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0;i < m;i++)
    {
        scanf("%d",&brr[i]);
    }
    crr[0] = -1;
    int k = 1;
    for (int i = 0; i < n; i++) 
    {
        if (i >= 1 && arr[i] == arr[i-1]) {continue;}
        for (int j = 0; j < m; j++) 
        {
            if ((t >= arr[i] + brr[j]) && (arr[i] + brr[j] > crr[k-1]))
            {
                crr[k] = arr[i] + brr[j];
                k++;
            }
        }
    }
    int mi = -1;
    int flag = 0;
    for (int i = 1;i < k;i++)
    {
        if (crr[i] >= mi) {mi = crr[i];flag = 1;}
    }
    if (flag == 1) {printf("%d",t-mi);}
    else {printf("-1");}
    return 0;
}