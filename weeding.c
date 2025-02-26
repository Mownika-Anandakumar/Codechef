#include <stdio.h>
// Function to check if all weeds can be removed within M days
void solve() {
    int N, M, K;
    scanf("%d %d %d", &N, &M, &K); // Read N, M, K
    int A[N]; // Array to store the weed appearance days
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]); // Read the days when weeds appear
    }
    // Process each weed
    for (int i = 0; i < N; i++) {
        if (A[i] + (K - 1) > M) { // If we can't spray K times before M
            printf("No\n");
            return; // Early exit
        }
    }
    printf("Yes\n"); // If all weeds can be removed in time
}
int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        solve(); // Process each test case
    }
    return 0;
}
