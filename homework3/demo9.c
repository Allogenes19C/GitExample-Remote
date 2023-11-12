#include <stdio.h>
int main() 
{
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[1005];
    for (int i = 0;i <= n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sign = arr[k-1];
    int l = 0;
    int r = n-1;
    while (1)
    {
        while(arr[l] < sign && l != r){l++;}
        while(arr[r] >= sign && l != r){r--;}
        if (l == r) {break;}
        int temp;
        temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
    }
    int pio;
    for (int i = 0;i <= n-1;i++)
    {
        if (arr[i] == sign)
        {
            pio = i;
            break;
        }
    }
    int tempe;
    tempe = arr[pio];
    arr[pio] = arr[l];
    arr[l] = tempe;
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}