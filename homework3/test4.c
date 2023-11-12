#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int time;
    scanf("%d",&time);
    getchar();
    for (int k = 1;k <= time;k++)
    {
        int judge = 0;
        int n;
        int count = 0;
        int sign = 1;
        char arr[100];
        char brr[100];
        fgets(brr,100,stdin);
        for (int i = 0;i <= strlen(brr);i++)
        {
            if (isdigit(brr[i]))
            {
                
            }
        }
        if (judge) {printf("Error\n");}
        else{;}
    }    
    return 0;
}