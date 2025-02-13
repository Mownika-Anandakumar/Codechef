#include <stdio.h>
#include <stdlib.h>
#define MAX_N 100005
int freq[MAX_N];
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        // Reset frequency array
        for (int i = 0; i <= N; i++) {
            freq[i] = 0;
        }
        int max_freq = 0;
        for (int i = 0; i < N; i++) {
            int x;
            scanf("%d", &x);
            freq[x]++;
            if (freq[x] > max_freq) {
                max_freq = freq[x];
            }
        }
        // Minimum operations needed
        printf("%d\n", N - max_freq);
    }
    return 0;
}
