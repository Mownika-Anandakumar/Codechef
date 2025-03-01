#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        long long N;
        scanf("%lld", &N);
        printf("%lld\n", N / 2 + (N % 2));
    }

    return 0;
}
