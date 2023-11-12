#include <stdio.h>
#include <string.h>
int main()
{
    int len;
    char arr[1005];
    scanf("%d",&len);
    getchar();
    fgets(arr,1005,stdin);
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
    char arra[10],brra[10];
    for (int k = 0;k <= 9;k++)
    {
        arra[k] = k+48;
    }
    for (int k = 0;k <= 9;k++)
    {
        brra[k] = k+48;
    }
    int count1 = 0;
    int count2 = 0;
    int k = 0;
    int flag1,flag2 = 0;
    for (k = 0;k < strlen(arr)/2;k++)
    {
        if (arr[k] != '?') {printf("%c",arr[k]);}
        else if (arr[k] == '?')
        {
            printf("%c%c",arra[count1],brra[count2]);
            if (count1 != 9) {count1++;flag1 = 1;flag2 = 0;}
            else {count2++;count1 = 0;flag2 = 1;flag1 = 0;}
        }
    }
    if (flag1 == 1) {count1--;}
    else if (flag2 == 1) {count2--;count1 = 9;}
    for (int g = k;g <= strlen(arr)-1;g++)
    {
        if (arr[g] != '?') {printf("%c",arr[g]);}
        else 
        {
            printf("%c%c",brra[count2],arra[count1]);
            if (count1 != 0) {count1--;}
            else {count2--;count1 = 9;}
        }
    }
    return 0;
}