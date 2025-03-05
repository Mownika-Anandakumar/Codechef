#include <stdio.h>
#include <string.h>
int max_alternating_length(int n, char s[]) {
    int count0 = 0, count1 = 0;
    // Count 0s and 1s
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') 
            count0++;
        else 
            count1++;
    }
    // Compute max alternating length
    return 2 * (count0 < count1 ? count0 : count1) + (count0 != count1 ? 1 : 0);
}
int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        char s[n + 1]; // +1 for null terminator
        scanf("%s", s);
        printf("%d\n", max_alternating_length(n, s));
    }
    return 0;
}
