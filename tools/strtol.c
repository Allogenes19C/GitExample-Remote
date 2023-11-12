#include <stdio.h>
#include <stdlib.h>
int main()
{
    char nu[100] = {0};
    scanf("%s",nu);
    char *end;
    printf("%d",strtol(nu,&end,12));
    return 0;
}