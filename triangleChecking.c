#include <stdio.h>
int main() {
    int A, B, C;
    // Input three integers
    scanf("%d %d %d", &A, &B, &C);
    // Check the triangle inequality conditions
    if (A + B > C && B + C > A && A + C > B) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
