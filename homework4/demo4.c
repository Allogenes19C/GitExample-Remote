#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char a[105][105];
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= n;j++)
        {
            scanf("%c",&a[i][j]);
        }
        getchar();
    }
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= n;j++)
        {
            int count = 0;
            if (a[i][j] == 'o')
            {
                if (a[i-1][j-1] == '*') {count++;}
                if (a[i-1][j] == '*') {count++;}
                if (a[i-1][j+1] == '*') {count++;}
                if (a[i][j-1] == '*') {count++;}
                if (a[i][j+1] == '*') {count++;}
                if (a[i+1][j-1] == '*') {count++;}
                if (a[i+1][j] == '*') {count++;}
                if (a[i+1][j+1] == '*') {count++;}
                a[i][j] = count + 48;
            }
        }
    }

    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= n;j++)
        {
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}