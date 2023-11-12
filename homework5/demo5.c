#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char strp[10] = {0};
    char strq[10] = {0};
    char strr[10] = {0};
    scanf("%s%s%s",strp,strq,strr);
    int p = 0;
    int q = 0;
    int r = 0;
    int b = 0;
    int flag = 0;
    int max = 0;
    for (int i = 0; i <= strlen(strp) - 1; i++)
    {
        if (strp[i]-48 >= max)
        {
            max = strp[i]-47;
        }
    }
    for (int i = 0; i <= strlen(strq) - 1; i++)
    {
        if (strq[i]-48>= max)
        {
            max = strq[i]-47;
        }
    }
    for (int i = 0; i <= strlen(strr) - 1; i++)
    {
        if (strr[i]-48 >= max)
        {
            max = strr[i]-47;
        }
    }
    if (max < 2) (max = 2);
    for (b = max;b <= 40;b++)
    {
        int k = 0;
        for (int i = strlen(strp)-1;i >= 0;i--)
        {
            p = p + (strp[i]-48)*pow(b,k);
            k++;
        }
        k = 0;
        for (int i = strlen(strq)-1;i >= 0;i--)
        {
            q = q + (strq[i]-48)*pow(b,k);
            k++;
        }
        k = 0;
        for (int i = strlen(strr)-1;i >= 0;i--)
        {
            r = r + (strr[i]-48)*pow(b,k);
            k++;
        }
        if (p*q == r) {flag = 0;break;}
        else {p=0;q=0;r=0;flag = 1;}
    }
    if (flag == 0) {printf("%d",b);}
    else {printf("0");}
    return 0;
}