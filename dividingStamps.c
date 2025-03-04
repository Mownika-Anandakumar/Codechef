#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);  // Read the number of members
    long long total_stamps = 0;
    int stamps;
    for (int i = 0; i < n; i++) {
        scanf("%d", &stamps);
        total_stamps += stamps;  // Compute total number of stamps
    }
    long long required_stamps = (long long)n * (n + 1) / 2;  // Compute required sum
    if (total_stamps == required_stamps) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
