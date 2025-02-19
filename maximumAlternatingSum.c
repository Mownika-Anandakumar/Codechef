#include <stdio.h>
#include <stdlib.h>
// Comparison function for sorting in descending order
int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}
void solve() {
    int N;
    scanf("%d", &N);
    int A[N]; 
    // Read the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    // Sort the array in descending order
    qsort(A, N, sizeof(int), compare);
    // Compute the alternating sum
    long long maxSum = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0)
            maxSum += A[i]; // Add elements at even indices (0-based)
        else
            maxSum -= A[i]; // Subtract elements at odd indices
    }
    // Output the result
    printf("%lld\n", maxSum);
}
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        solve();
    }
    return 0;
}
