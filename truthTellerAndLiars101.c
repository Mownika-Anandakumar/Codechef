#include <stdio.h>
void min_questions_to_find_path(int t, int test_cases[][2]) {
    for (int i = 0; i < t; i++) {
        int N = test_cases[i][0], M = test_cases[i][1];
        if (M >= N) {
            printf("-1\n"); // Impossible to determine the path
        } else {
            printf("%d\n", N + M); // Ask all people to ensure certainty
        }
    }
}
int main() {
    int t;
    scanf("%d", &t);
    int test_cases[t][2];
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &test_cases[i][0], &test_cases[i][1]);
    }
    min_questions_to_find_path(t, test_cases);
    return 0;
}
