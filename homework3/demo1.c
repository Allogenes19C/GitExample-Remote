#include <stdio.h>
int main()
{
    int len;
    char arr[2000];
    scanf("%d",&len);
    getchar();
    fgets(arr,2000,stdin);
    int i,j;
    for (i = 0,j = (len-1);i <= len - 1;i++,j--)
    {
        if (arr[i] == '?')
        {
            arr[i] = arr[j];
        }
        if (arr[j] == '?')
        {
            arr[j] = arr[i];
        }
    }
    for (int i = 0;i <= len - 1;i++)
    {
        printf("%c",arr[i]);
    }
    return 0;
}