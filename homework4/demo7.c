#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char arr[1000] = {0};
    char brr[1000] = {0};
    arr[3] = '1';
    scanf("%d",&n);
    getchar();
    scanf("%s",arr);
    int p0 = strlen(arr)-1;
    int sign = p0;
    for (int co = 0;co <= 2;co++)
    {
        while (p0 >= 0)
        {
            arr[p0+1] = arr[p0];
            p0--;
        }
        sign++;
        p0 = sign;
    }
    arr[0] = '0';
    arr[1] = '0';
    arr[2] = '0';
    for (int s = 1;s <= n;s++)
    {
        for (int i = 3;arr[i] != '\0';i++)
        {
            if (arr[i] == 'A')
            {
                int count = 0;
                int p = i;
                int q = i;
                for (int k = 0; k <= 2;k++)
                {
                    p--;
                    q++;
                    if (arr[p] == 'A') {count++;}
                    if (arr[q] == 'A') {count++;}
                    if (arr[p] == 'B' || arr[q] == 'B') {count = 0;break;}
                }
                if (count >= 5 || count <= 1) {brr[i] = '.';}
                else {brr[i] = 'A';}
            }
            else if (arr[i] == 'B')
            {
                int count = 0;
                int p = i;
                int q = i;
                for (int k = 0; k <= 2;k++)
                {

                    p--;
                    q++;
                    if (arr[p] == 'B') {count++;}
                    if (arr[q] == 'B') {count++;}
                    if (arr[p] == 'A' || arr[q] == 'A') {count = 0;break;}
                }
                if (count >= 5 || count <= 1) {brr[i] = '.';}
                else {brr[i] = 'B';}
            }
            else if (arr[i] == '.')
            {
                int count1 = 0;
                int count2 = 0;
                int p = i;
                int q = i;
                for (int k = 0; k <= 2;k++)
                {
                    p--;
                    q++;
                    if (arr[p] == 'A') {count1++;}
                    else if (arr[p] == 'B') {count2++;}
                    if (arr[q] == 'A') {count1++;}
                    else if (arr[q] == 'B') {count2++;}
                }
                if (count1 >= 2 && count1 <=4 && count2 == 0) {brr[i] = 'A';}
                else if (count2 >= 2 && count2 <=4 && count1 == 0) {brr[i] = 'B';}
                else {brr[i] = '.';}
            }
        }
        for (int i = 3;brr[i] != '\0';i++)
        {
            arr[i] = brr[i];
        }
    }
    for (int i = 3;arr[i] != '\0';i++)
    {
        printf("%c",arr[i]);
    }
    return 0;
}