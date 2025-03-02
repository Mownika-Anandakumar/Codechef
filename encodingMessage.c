#include <stdio.h>
#include <string.h>

void swap_and_replace(char *s, int n) {
    // Step 1: Swap adjacent characters
    for (int i = 0; i < n - 1; i += 2) {
        char temp = s[i];
        s[i] = s[i + 1];
        s[i + 1] = temp;
    }
    // Step 2: Replace each character with its reverse position in the alphabet
    for (int i = 0; i < n; i++) {
        s[i] = 'a' + ('z' - s[i]);
    }
    printf("%s\n", s);
}
int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);
        char S[N + 1];
        scanf("%s", S);
        swap_and_replace(S, N);
    }
    return 0;
}
