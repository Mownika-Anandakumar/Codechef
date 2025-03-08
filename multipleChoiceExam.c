#include <stdio.h>
#include <string.h>

void calculate_score(int T) {
    while (T--) {
        int N, score = 0, i = 0;
        scanf("%d", &N);
        char S[N + 1], U[N + 1];
        scanf("%s", S);
        scanf("%s", U);
        
        while (i < N) {
            if (U[i] == 'N') { // Chef did not answer
                i++;
                continue;
            }
            if (U[i] == S[i]) { // Correct answer
                score++;
            } else { // Wrong answer, discard next question
                i++;
            }
            i++; // Move to next question
        }
        printf("%d\n", score);
    }
}

int main() {
    int T;
    scanf("%d", &T);
    calculate_score(T);
    return 0;
}
