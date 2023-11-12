#include <stdio.h>
#define N 20
#define H 10
int main()
{
    int arr[N][N] = {0};
    int t = 0;
    scanf("%d",&t);
    arr[1][H] = 1;
    int m = 1;
    int n = H;
    int gap = t/2;
    for (int i = 2;i <= t*t;i++)
    {
        m--;
        n++;
        if (m == 0 && n >= H - gap && n <= H + gap)
        {
            m = t;
            arr[m][n] = i;
            continue;
        }
        else if (n > H + gap && m >= 1 && m <= t)
        {
            n = H - gap;
            if (arr[m][n] == 0)
            {
                arr[m][n] = i;
                continue; 
            }
            else
            {
                n = H + gap;
                m += 2;
                arr[m][n] = i;
                continue;
            }
        }
        else if (m == 0 && n > H + gap)
        {
            if (arr[t][H - gap] == 0)
            {
                m = t;
                n = H - gap;
                arr[m][n] = i;
                continue;
            }
            else
            {
                n--;
                m += 2;
                arr[m][n] = i;
                continue;
            }
        }
        else
        {
            if (arr[m][n] == 0)
            {
                arr[m][n] = i;
                continue; 
            }
            else
            {
                m += 2;
                n--;
                arr[m][n] = i;
                continue;
            }
        }
    }
    for (int i = 1;i <= t;i++)
    {
        for (int j = H - gap;j <= H + gap;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}