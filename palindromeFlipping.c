#include <stdio.h>
#include <string.h>
void checkPalindromeFlipping(int n, char s[]) {
    int mismatch_count = 0;
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        if (s[i] != s[j]) {
            mismatch_count++;
        }
    }
    // If mismatch_count is at most 1, we can always make it a palindrome
    if (mismatch_count <= 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);
        checkPalindromeFlipping(n, s);
    }
    return 0;
}
