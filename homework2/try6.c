#include <stdio.h>

int main() {
    int n = 0;
    int sum = 0;
    int arr[100000],brr[100000];
    scanf("%d",&n);
    for (int i = 0;i <= n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int minTuoCount = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == 0) 
        {
            continue;
        }
        int count = 0; 
        for (int j = 0; j < n; j++) 
        {
            if (arr[j] >= arr[i]) 
            {
                count++;
            }
        }
        if (count < arr[i]) 
        {
            minTuoCount += arr[i] - count;
        }
    }

    printf("%d", minTuoCount);

    return 0;
}