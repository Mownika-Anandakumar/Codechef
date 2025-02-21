#include <stdio.h>

// Function to check if an array is pseudo-sorted
void isPseudoSorted(int N, int A[]) {
    int disorder_count = 0, swap_index = -1;
    
    // Count disorder points
    for (int i = 0; i < N - 1; i++) {
        if (A[i] > A[i + 1]) {
            disorder_count++;
            swap_index = i;
        }
    }
    
    // If already sorted or one swap can fix it
    if (disorder_count == 0) {
        printf("YES\n");
        return;
    }
    if (disorder_count > 1) {
        printf("NO\n");
        return;
    }
    
    // Try swapping the adjacent disorder pair
    int temp = A[swap_index];
    A[swap_index] = A[swap_index + 1];
    A[swap_index + 1] = temp;
    
    // Check if sorted after swap
    for (int i = 0; i < N - 1; i++) {
        if (A[i] > A[i + 1]) {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        isPseudoSorted(N, A);
    }
    return 0;
}
