#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int reverse(int n) {
    
}

int count_absolute_primes(int n) {
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (is_prime(i) && is_prime(reverse(i))) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", n, count_absolute_primes(n));
    return 0;
}