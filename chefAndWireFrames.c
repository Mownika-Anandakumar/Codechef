#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases
    while (T--) {
        int N, M, X;
        scanf("%d %d %d", &N, &M, &X); // Read N, M, X
        int perimeter = 2 * (N + M); // Calculate perimeter
        int cost = perimeter * X;   // Calculate total cost
        printf("%d\n", cost);  // Print result
    }
    return 0;
}
