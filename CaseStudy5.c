#include <stdio.h>
#include <math.h>

int isPerfectSquare(long long x) {
    long long s = (long long)sqrt(x);
    return (s * s == x);
}

int isFibonacci(long long n) {
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        long long N;
        scanf("%lld", &N);

        if (isFibonacci(N)) {
            printf("IsFibo\n");
        } else {
            printf("IsNotFibo\n");
        }
    }

    return 0;
}
