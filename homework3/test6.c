#include <stdio.h>
int main()
{
    int n;
    int a[100];
    scanf("%d",&n);
    for (int j = 0;j <= n-1;j++)
    {
        scanf("%d",&a[j]);
    }
    for (int i = 0; i < n; i++) 
    {
      for (int j = 0; j < n - i - 2; j++) 
      if (a[j] > a[j + 1]) 
      {
        int tmp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = tmp;
      }
    }
    for (int j = 0;j <= n-1;j++)
    {
        printf("%d ",a[j]);
    }
    return 0;
}