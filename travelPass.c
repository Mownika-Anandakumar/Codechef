#include <stdio.h>
void travel_pass() {
    int T;
    scanf("%d", &T);  // Number of test cases
    while (T--) {
        int N, A, B, count_0 = 0, count_1 = 0;
        scanf("%d %d %d", &N, &A, &B);
        char S[N + 1];  // String to store the journey
        scanf("%s", S);
        // Count occurrences of '0' and '1'
        for (int i = 0; i < N; i++) {
            if (S[i] == '0') count_0++;
            else count_1++;
    }
        // Calculate total time
        int total_time = (count_0 * A) + (count_1 * B);
        // Print result
        printf("%d\n", total_time);
    }
}
int main() {
    travel_pass();
    return 0;
}
