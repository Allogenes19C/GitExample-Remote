#include <stdio.h>
int main()
{
    int flag = 0;
    int arr[9][9];
    for (int j = 0;j <= 8;j++)
    {
        for (int i = 0;i <= 8;i++) {scanf("%d",&arr[j][i]);}
    }

    for (int i = 0;i <= 8;i++)
    {
        int tong[10] = {0};
        for (int j = 0;j <= 8;j++)
        {
            tong[arr[i][j]] = tong[arr[i][j]] + 1;
            if (tong[arr[i][j]] > 1) {flag = 1;break;}
        }
    }

    for (int i = 0;i <= 8;i++)
    {
        int tong[10] = {0};
        for (int j = 0;j <= 8;j++)
        {
            tong[arr[j][i]] = tong[arr[j][i]] + 1;
            if (tong[arr[j][i]] > 1) {flag = 1;break;}
        }
    }
    int bool[9];
    for (int i = 0; i < 9;i += 3) 
    {
        for (int j = 0; j < 9;j += 3) 
        {
            for (int k = 0;k < 9;k++) {bool[k] = 0;}
            for (int k = 0;k < 9;k++) 
            {
                int num = arr[i + k / 3][j + k % 3];
                if (num == 0) {continue;}
                if (bool[num - 1]) {flag = 1;}
                bool[num - 1] = 1;
            }
        }
    }
    if (flag == 0) {printf("YES");}
    else {printf("NO");}
    return 0;
}