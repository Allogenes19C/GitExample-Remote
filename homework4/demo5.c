#include <stdio.h>
int main()
{
    int n,m,x,y;
    scanf("%d %d %d %d",&n,&m,&x,&y);
    getchar();
    char arr[100][100] = {0};
    int vis[100][100] = {0};
    char brr[100][2] = {0};
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= m;j++) {scanf("%c",&arr[i][j]);}
        getchar();
    }
    int count = 1;
    vis[x][y] = 1;
    brr[0][0] = x;
    brr[0][1] = y;
    while (1)
    {
        if (arr[x-1][y] == '#' && vis[x-1][y] != 1)
        {
            x = x-1;
            brr[count][0] = x;
            brr[count][1] = y;
            vis[x][y] = 1;
            count++;
        }
        else if (arr[x+1][y] == '#' && vis[x+1][y] != 1)
        {
            x = x+1;
            brr[count][0] = x;
            brr[count][1] = y;
            vis[x][y] = 1;
            count++;
        }
        else if (arr[x][y-1] == '#' && vis[x][y-1] != 1)
        {
            y = y-1;
            brr[count][0] = x;
            brr[count][1] = y;
            vis[x][y] = 1;
            count++;
        }
        else if (arr[x][y+1] == '#' && vis[x][y+1] != 1)
        {
            y = y+1;
            brr[count][0] = x;
            brr[count][1] = y;
            vis[x][y] = 1;
            count++;
        }
        else {break;}
    }
    printf("%d\n",count);
    for (int i = 0;i <= count-1;i++)
    {
        
        printf("%d %d\n",brr[i][0],brr[i][1]);
    }
    return 0;
}