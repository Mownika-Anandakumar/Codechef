#include <stdio.h>
#include <string.h>

#define MAX_N 100000

void can_make_equal(int N, char S[]) {
    int freq[26] = {0};
    
    // Count frequency of each character in S
    for (int i = 0; i < N; i++) {
        freq[S[i] - 'a']++;
    }
    
    // Check if all characters have even frequency
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}
int main() {
    int T, N;
    char S[MAX_N + 1];
    
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        scanf("%s", S);
        can_make_equal(N, S);
    }
    
    return 0;
}
