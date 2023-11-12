#include <stdio.h>
void func(char str[100000], int first, int last) 
{
    while (first < last) 
    {
        char temp = str[first];
        str[first] = str[last];
        str[last] = temp;
        first++;
        last--;
    }
}
int main() 
{
    int n, k;
    char str[100000];
    scanf("%d", &n);
    getchar();
    fgets(str,100000,stdin);
    scanf("%d", &k);
    func(str, 0, k-1);
    func(str, k, n-1);
    printf("%s\n", str);
    return 0;
}