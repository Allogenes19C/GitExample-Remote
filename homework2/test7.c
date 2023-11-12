#include <stdio.h>
int main()
{
    int n = 0;
    int sum = 0;
    int tuo = 0;
    int arr[100000],brr[100000];
    scanf("%d",&n);
    for (int i = 0;i <= n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0;i <= n;i++)
    {
        brr[i] = i;
    }
    for (int i = 0;i <= n;i++)
    {   
        sum += arr[i];
        if (sum < brr[i+1])
        {
            tuo = tuo + brr[i+1] - sum;
            sum = brr[i+1];
        }

        printf("%d",sum);
    }
    printf("%d",tuo);
    return 0;
}