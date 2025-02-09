#include <stdio.h>
void distribute_chocolates(int T, int test_cases[]) {
    for (int i = 0; i < T; i++) {
        int N = test_cases[i];
        if (N % 2 == 0) {
            // If N is even, we can take (N-2, 1, 1) as a valid distribution
            printf("%d %d %d\n", N-2, 1, 1);
        } else {
            // If N is odd, we can take (N-3, 2, 1) as a valid distribution
            printf("%d %d %d\n", N-3, 2, 1);
        }
    }
}
int main() {
    int T;
    scanf("%d", &T);
    int test_cases[T];
    for (int i = 0; i < T; i++) {
        scanf("%d", &test_cases[i]);
    }
    distribute_chocolates(T, test_cases);
    return 0;
}
