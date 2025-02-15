#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int A[N], B[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        for (int i = 0; i < N; i++) {
            scanf("%d", &B[i]);
        }

        int maxPoints = 0;
        for (int i = 0; i < N; i++) {
            int points = (A[i] * 20) - (B[i] * 10);
            if (points < 0) points = 0;
            maxPoints = max(maxPoints, points);
        }

        printf("%d\n", maxPoints);
    }

    return 0;
}
