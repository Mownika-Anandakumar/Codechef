#include <stdio.h>
#include <string.h>
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N; // Length of the strings
        scanf("%d", &N);
        char S[N + 1], R[N + 1]; // Strings 
        // Read strings S and R
        scanf("%s", S);
        scanf("%s", R);
        int countS = 0, countR = 0;
        // Count the number of 1's in S and R
        for (int i = 0; i < N; i++) {
            if (S[i] == '1') countS++;
            if (R[i] == '1') countR++;
        }
        // If the count of 1's is the same in both strings, it's possible to make equal
        if (countS == countR) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
