#include <stdio.h>
#include <string.h>
int main()
{
    int len;
    char arr[1005];   //数组大小不要紧
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
    }        //补全有另一半的'?'


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
    int flag = 0;
    char str[1005];
    if (len % 2 == 0)
    {
        for (int k = 0;k < len/2;k++)
        {
            if (arr[k] != '?') {str[flag] = arr[k];flag++;}
            else
            {
                str[flag] = arra[count1];
                str[flag+1] = brra[count2];
                if (count1 != 9) {count1++;}
                else {count2++;count1 = 0;}
                flag = flag + 2;
            }
        }
    }
    if (len % 2 == 1)
    {
        for (int k = 0;k <= len/2;k++)
        {
            if (arr[k] != '?') {str[flag] = arr[k];flag++;}
            else
            {
                str[flag] = arra[count1];
                str[flag+1] = brra[count2];
                if (count1 != 9) {count1++;}
                else {count2++;}
                flag = flag + 2;
            }
        }        
    }
    
            //对于没有另一半的?",先补写一半
    if (len % 2 == 0)
    {
        int tip = strlen(str) - 1;
        for (int k = strlen(str);;k++)
        {
            str[k] = str[tip];
            tip--;
            if (tip < 0) {break;}
        }
    }
    if (len % 2 == 1)
    {
        int tip = strlen(str) - 2;
        for (int k = strlen(str);;k++)
        {
            str[k] = str[tip];
            tip--;
            if (tip < 0) {break;}
        }
    }
    
            //再镜像地补全另一半
    for (int p = 0;p <= strlen(str)-1;p++)
    {
        printf("%c",str[p]);
    }
    return 0;
}