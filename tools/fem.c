 #include <stdio.h>
 #include <math.h>
 int main()
 {
    int n;
    int isprime[1000] = {0};
    scanf("%d",&n);
    int count = 0;
    for (int i = 2;i <= n;i++)
    {
        int num = pow(7,i);
        if ((num-7)%i == 0) {isprime[i] = 1;}
        if (!isprime[i]) {count++;}
    }
    printf("%d",count);
    return 0;
 }