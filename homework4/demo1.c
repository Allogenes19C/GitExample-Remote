#include <stdio.h>
int main()
{
    int m,n,p;
    scanf("%d %d %d",&m,&n,&p);
    int arr[100][100],brr[100][100],crr[100][100];
    for (int i = 0;i <= m-1;i++)
    {
        for (int j = 0;j <= n-1;j++) {scanf("%d",&arr[i][j]);}
    }
    for (int i = 0;i <= n-1;i++)
    {
        for (int j = 0;j <= p-1;j++) {scanf("%d",&brr[i][j]);}
    }

    for (int i = 0;i <= m-1;i++)
    {
        for (int j = 0;j <= p-1;j++)
        {
            int sum = 0;
            for (int k = 0;k <= n-1;k++)
            {
                sum += arr[i][k]*brr[k][j];
            }
            crr[i][j] = sum;
        }
    }
    for (int i = 0;i <= m-1;i++)
    {
        for (int j = 0;j <= p-1;j++)
        {
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}