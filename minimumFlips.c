#include <stdio.h>
#include <string.h>

int min_flips(char *s) {
    int count_U = 0, count_D = 0;
    int n = strlen(s);

    // Count the number of segments
    for (int i = 0; i < n; i++) {
        if (i == 0 || s[i] != s[i - 1]) {
            if (s[i] == 'U')
                count_U++;
            else
                count_D++;
        }
    }

    // Minimum flips required
    return count_U < count_D ? count_U : count_D;
}

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        char S[51]; // Max length is 50
        scanf("%s", S);

        printf("%d\n", min_flips(S));
    }

    return 0;
}
