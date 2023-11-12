#include <stdio.h>
#include <stdlib.h>
int compare(const void *a,const void *b)
{
    return *(int*)a - *(int*)b;
}
int main()
{
    int arr[10] = {1,9,8,4,6,5,2,0,7,3};
    int key = 0;
    printf("%d",bsearch(&key,arr,10,sizeof(int),compare));
    return 0;
}