#include <stdio.h>
#include <stdlib.h>
#define MAX_N 100  // Max length of the command sequence (S)
void solve() {
    int T;  // Number of test cases
    scanf("%d", &T);  // Read the number of test cases
    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);  // Read N (length of command sequence) and X (initial position)
        char S[MAX_N + 1];  // Command sequence string
        scanf("%s", S);  // Read the command sequence
        // Set to track distinct positions visited
        int visited[2000002] = {0};  // To handle large negative and positive values
        // Initial position is X, mark it as visited
        int current_position = X;
        visited[current_position + 1000000] = 1;  // Offset by 1,000,000 to avoid negative index
        // Process each command in the sequence
        for (int i = 0; i < N; i++) {
            if (S[i] == 'L') {
                current_position--;  // Move left
            } else if (S[i] == 'R') {
                current_position++;  // Move right
            }
            visited[current_position + 1000000] = 1;  // Mark the new position as visited
        }
        // Count the number of distinct positions visited
        int distinct_count = 0;
        for (int i = 0; i < 2000002; i++) {
            if (visited[i] == 1) {
                distinct_count++;
            }
        }
        // Print the result for the current test case
        printf("%d\n", distinct_count);
    }
}
int main() {
    solve();  // Call the solve function
    return 0;
}
