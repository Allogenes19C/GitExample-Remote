#include <stdio.h>
int main()
{
    int n;
    char arr[500] = {0};
    int brr[500] = {0};
    char crr[500][500] = {0};
    scanf("%d",&n);
    getchar();
    scanf("%s",arr);
    for (int i = 0;i < n+2;i++)
    {
        for (int j = 0;j < n+2;j++)
        {
            crr[i][j] = ' ';
        }
    }
    int max = 0;
    int flag = 1;
    for (int i = 0;i <= n-1;i++)
    {
        brr[arr[i]] = brr[arr[i]] + 1;
        if (brr[arr[i]] > max) {max = brr[arr[i]];}
    }
    int k = 0;
    for (int i = 97;i <= 122;i++)
    {
        if (brr[i] > 0)
        {
            flag = 0;
            crr[k][0] = i;
            crr[k][1] = '-';
            for (int j = 2;j <= brr[i]+1;j++)
            {
                crr[k][j] = '=';
            }
            k++;
        }
        if (brr[i-32] > 0)
        {
            flag = 0;
            crr[k][0] = i-32;
            crr[k][1] = '-';
            for (int j = 2;j <= brr[i-32]+1;j++)
            {
                crr[k][j] = '=';
            }
            k++;
        }
        if (flag != 1)
        {
            crr[k][1] = '-';
            k++;
            flag = 1;
        }
    }
    for (int j = max+1;j >= 0;j--)
    {
        for (int i = 0;i < k - 1;i++)
        {
            printf("%c",crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}