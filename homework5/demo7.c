#include <stdio.h>
#include <stdlib.h>
#define N 1005
int maxx(int a,int b)
{
    if (a >= b) {return a;}
    else {return b;}
}
int compare_parts(const void*a,const void*b)
{
    return *(int*)a-*(int*)b;
}
int main()
{
    int n,m,t = 0;
    scanf("%d%d%d",&n,&m,&t);
    int arr[N] = {0};
    int brr[N] = {0};
    int crr[N] = {0};
    for (int i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0;i < m;i++)
    {
        scanf("%d",&brr[i]);
    }
    /*for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < m - i - 1; j++) 
        {
            if (brr[j] > brr[j + 1]) 
            {
                int temp = brr[j];
                brr[j] = brr[j + 1];
                brr[j + 1] = temp;
            }
        }
    }*/
    qsort(brr,m,sizeof(int),compare_parts);
    int i = 0;
    int j = m-1;
    int mi = 0;
    int flag = 0;
    while(i < n && j >= 0) 
    {
        if(arr[i] + brr[j] > t) {j--;}
        else 
        {
            mi = maxx(mi,arr[i] + brr[j]);
            flag = 1;
            i++;
        }
    }
    if (flag) {printf("%d",t-mi);}
    else {printf("-1");}
    return 0;
}