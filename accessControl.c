#include <stdio.h>
#include <string.h>
void checkValidAccess(int N, int X, char S[]) {
    int swipesLeft = 0; // Start with 0 swipes
    for (int i = 0; i < N; i++) {
        if (S[i] == '1') {
            // Renewal
            swipesLeft = X;
        } else if (S[i] == '0') {
            // Swipe required
            if (swipesLeft > 0) {
                swipesLeft--;  // Use one swipe
            } else {
                printf("NO\n");
                return;
            }
        }
    }
    printf("YES\n");
}
int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases
    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);  // Read N and X
        char S[100005]; // Given max length is 100,000
        scanf("%s", S); // Read the binary string
        checkValidAccess(N, X, S);
    }
    return 0;
}
