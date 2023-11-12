#include <stdio.h>
#include <math.h>
#include <string.h>
int main() 
{
    int time;
    int n,k;
    int judge = 1;
    char arr[100];
    scanf("%d",&time);
    getchar();
    for (int g = 1;g <= time;g++)
    {
        fgets(arr,100,stdin);
        for (int i = 0;i <= strlen(arr)-2;i++)
        {
            if (arr[i] != '0' && arr[i] != '1' && arr[i] != 'Z')
            {
                judge = 0;
            }
        }
        int result = 0;
        int j = 0;
        for (int i = strlen(arr)-2;i >= 0;i--)
        {
            if (arr[i] == '1')
            {
                result = result + pow(3,j);
            }
            else if (arr[i] == 'Z')
            {
                result = result - pow(3,j);
            }
            j++;
        }
        if (judge == 1) {printf("%d\n",result);}
        else {printf("Radix Error\n");}
        judge = 1;
    }
    return 0;
}