#include <stdio.h>
#include <string.h>
int min_operations_to_equalize(char *S, int N) {
    int zero_groups = 0, one_groups = 0;
    // Count contiguous groups of '0' and '1'
    for (int i = 0; i < N; i++) {
        if (i == 0 || S[i] != S[i - 1]) {
            if (S[i] == '0')
                zero_groups++;
            else
                one_groups++;
        }
    }
    // Return the minimum number of flips needed
    return zero_groups < one_groups ? zero_groups : one_groups;
}
int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        char S[N + 1];  // String of length N + 1 for null terminator
        scanf("%s", S);

        printf("%d\n", min_operations_to_equalize(S, N));
    }
    return 0;
}
