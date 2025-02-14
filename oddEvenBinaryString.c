#include <stdio.h>
void solve() {
    int N;
    scanf("%d", &N);
    int count_ones = 0, x;
    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        count_ones += x;  // To Count the number of 1s in B
    }
    // If count of ones is even, output "YES", otherwise "NO"
    printf("%s\n", (count_ones % 2 == 0) ? "YES" : "NO");
}
int main() {
    int T;
    scanf("%d", &T); 
    while (T--) {
        solve();
    }
    return 0;
}
