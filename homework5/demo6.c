#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[1005] = {0};
    int brr[1005][2] = {0};
    for (int i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m = 1;
    int k = 0;
    brr[0][0] = 0;
    brr[0][1] = 1;
    for (int i = 1;i < n;i++)
    {
        if (arr[i] >= arr[i-1]) {k++;brr[k][0] = i;brr[k][1] = 1;continue;}
        else
        {
            brr[k][1]++;
        }
    }
    int max_order = 1;
    int in = 0;
    for (in = 1;in <= k;in++)
    {
        if (brr[max_order][1] <= brr[in][1]) {max_order = brr[in][0];}
    }
    int write = 0;
    for (int i = max_order;i < n;i++)
    {
        if (arr[i] >= arr[max_order-1]) {write = i;}
    }
    int temp = arr[max_order-1];
    arr[max_order-1] = arr[write];
    arr[write] = temp;
    int mmm = brr[in-1][1];
    int i = n - mmm;
    int j = n-1;
    for (;i <= j;i++,j--)
    {
        int tempp = arr[i];
        arr[i] = arr[j];
        arr[j] = tempp;
    }
    for (int l = 0;l < n;l++)
    {
        printf("%d ",arr[l]);
    }
    return 0;
}