#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N, M, K;
        scanf("%d %d %d", &N, &M, &K);
        
        int diff = abs(N - M);
        
        if (diff <= K) {
            printf("0\n");
        } else {
            printf("%d\n", diff - K);
        }
    }
    
    return 0;
}
