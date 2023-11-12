#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int time;
    scanf("%d",&time);
    getchar();
    for (int kkk = 1;kkk <= time;kkk++)
    {
        int judge = 1;
        int n;
        int count = 0;
        int sign = 1;
        int arr[1000] = {0};
        char brr[100] = {0};
        scanf("%s",brr);
        n = atoi(brr);
        for (int nu = 0;brr[nu] != '\0' ;nu++)
        {
            if (!isdigit(brr[nu]) && brr[nu] != '-') 
            {
                judge = 0;
            }
        }
        if (judge == 0) {printf("Radix Error\n");continue;}
        else if (judge == 1)
        {
            if (n < 0) {sign = 0;}
            if (sign == 1)
            {
                for (int i = 0;;i++)
                {
                    arr[i] = n%3;
                    count++;
                    n = n/3;
                    if (n == 0) {break;}
                }
            }
            if (sign == 0)
            {
                n = -n;
                for (int i = 0;;i++)
                {
                    arr[i] = n%3;
                    count++;
                    n = n/3;
                    if (n == 0) {break;}
                } 
            }
            for (int j = 0;j <= count;j++)
            {
                if (arr[j] == 2 || arr[j] == 3)
                {
                    arr[j+1] = arr[j+1] + 1;
                }
            }


            if (sign == 1)
            {
                if (arr[count] != 0) {printf("%d",arr[count]);}
                for (int j = count-1;j >= 0;j--)
                {
                        
                    if (arr[j] == 0 || arr[j] == 1)
                    {
                        printf("%d",arr[j]);
                    }
                    else if (arr[j] == 2)
                    {
                    printf("Z");
                    }
                    else {printf("0");}
                }
                printf("\n");
            }
            if (sign == 0)    
            {
                if (arr[count] == 1) {printf("Z");}
                else if (arr[count] == 2) {printf("1");}
                for (int j = count-1;j >= 0;j--)
                {
                        
                    if (arr[j] == 0)
                    {
                        printf("%d",arr[j]);
                    }
                    else if (arr[j] == 1) {printf("Z");}
                    else if (arr[j] == 2) {printf("1");}
                    else {printf("0");}
                }
                printf("\n");
            }
        }
    }
    return 0;
}