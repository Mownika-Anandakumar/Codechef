#include <stdio.h>
int max_distinct_elements(int N) {
    return (N + 1) / 2;  // Number of odd numbers in range [1, N]
}
int main() {
    int T, N;
    scanf("%d", &T);  // Read number of test cases
    while (T--) {
        scanf("%d", &N);
        printf("%d\n", max_distinct_elements(N));
    }
    return 0;
}
