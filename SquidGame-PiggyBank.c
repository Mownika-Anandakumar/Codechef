#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    int eliminated = N - K;
    int prizePool = eliminated * 10000;
    printf("%d\n", prizePool);
    return 0;
}
