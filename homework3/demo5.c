#include <stdio.h>
int main()
{
	int n, k, j = 0;
	int count = 1, flag = 0;
	scanf("%d %d", &n,&k);
	int a[1000];
	while (1) 
    {
		if (flag == n - 1) {break;}
		if (a[j] == 1) {j++;}
		else 
        {
			if (count == k) 
            {
				a[j] = 1;
				flag++;
				count = 1;
				j++;
			} 
            else 
            {
				count++;
				j++;
			}
		}
		if (j == n) {j = 0;}
	}
	for (int i = 0;; i++) 
    {
		if (a[i] != 1) 
        {
			printf("%d", i+1);
			break;
		}
	}
	return 0;
}