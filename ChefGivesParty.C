#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int N, X, K;
        scanf("%d %d %d", &N, &X, &K);]
        int totalCost = N * X;
        if (totalCost <= K) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
