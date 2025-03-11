#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);  // Number of test cases
    while(T--) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);
        int possible = 0;
        // Try decorating the leaves with either 1 large + 3 small or 2 large
        for(int i = 0; i <= N; i++) {
            // i is the number of leaves decorated with 1 large + 3 small
            // remaining (N - i) leaves will be decorated with 2 large
            if(i * 1 <= X && i * 3 <= Y) {
                int remaining_leaves = N - i;
                if(remaining_leaves * 2 <= (X - i)) {
                    possible = 1;
                    break;
                }
            }
        }
        if(possible)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
