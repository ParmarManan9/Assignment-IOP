#include <stdio.h>

int main() {
    long long N, M;
    scanf("%lld %lld", &N, &M);

    long long total_candies = 0;
    
    for (int i = 0; i < M; i++) {
        long long a, b, k;
        scanf("%lld %lld %lld", &a, &b, &k);
        total_candies += (b - a + 1) * k;
    }
    printf("%lld\n", total_candies / N);
    return 0;
}
