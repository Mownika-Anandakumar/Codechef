#include <stdio.h>

void chef_and_steps(int test_cases) {
    while (test_cases--) {
        int N, K;
        scanf("%d %d", &N, &K);
        int distances[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &distances[i]);
        }
        
        for (int i = 0; i < N; i++) {
            if (distances[i] % K == 0) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }
}

int main() {
    int T;
    scanf("%d", &T);
    chef_and_steps(T);
    return 0;
}
