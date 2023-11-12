#include <stdio.h>
int main()
{
    char a[20][20] = {0};
    int m,n;
    scanf("%d %d",&m,&n);
    for (int i = 0;i <= m+3;i++)
    {
        for (int j = 0;j <= n+3;j++)
        {
            a[i][j] = '0';
        }
    }
    getchar();
    for (int i = 1;i <= n;i++) {scanf("%c",&a[1][i]);}
    for (int i = 2;i <= m;i++)
    {
        for (int j = 1;j <= n;j++)
        {
            if (a[i-1][j-1] == '1' && a[i-1][j] == '1' && a[i-1][j+1] == '1') {a[i][j] = '0';}
            else if (a[i-1][j-1] == '1' && a[i-1][j] == '1' && a[i-1][j+1] == '0') {a[i][j] = '1';}
            else if (a[i-1][j-1] == '1' && a[i-1][j] == '0' && a[i-1][j+1] == '1') {a[i][j] = '1';}
            else if (a[i-1][j-1] == '1' && a[i-1][j] == '0' && a[i-1][j+1] == '0') {a[i][j] = '0';}
            else if (a[i-1][j-1] == '0' && a[i-1][j] == '1' && a[i-1][j+1] == '1') {a[i][j] = '1';}
            else if (a[i-1][j-1] == '0' && a[i-1][j] == '1' && a[i-1][j+1] == '0') {a[i][j] = '1';}
            else if (a[i-1][j-1] == '0' && a[i-1][j] == '0' && a[i-1][j+1] == '1') {a[i][j] = '1';}
            else if (a[i-1][j-1] == '0' && a[i-1][j] == '0' && a[i-1][j+1] == '0') {a[i][j] = '0';}
        }
    }
    for (int i = 2;i <= m;i++)
    {
        for (int j = 1;j <= n;j++)
        {
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}