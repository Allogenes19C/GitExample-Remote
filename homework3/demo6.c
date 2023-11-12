#include <stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int j = 0;j <= T-1;j++)
    {
        int n;
        int arr[1000];
        scanf("%d",&n);
        for (int i = 0;i <= n-1;i++)
        {
            scanf("%d",&arr[i]);
        }
        int count = 0;
        for (int i = 0;i < n-1;i++)
        {
            if (arr[n-1] < arr[i])
            {
                printf("No\n");
                break;
            }
            count++;
            if (count == n-1) {printf("Yes\n");break;}
        }
    }
    return 0;
}