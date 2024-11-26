#include <stdio.h>

int countDivisibleDigits(long long n) {
    long long original = n;
    int count = 0;

    while (n > 0) {
        int digit = n % 10;
        if (digit != 0 && original % digit == 0) {
            count++;
        }
        n /= 10;
    }

    return count;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);
        printf("%d\n", countDivisibleDigits(n));
    }

    return 0;
}
