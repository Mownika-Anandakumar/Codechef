#include <stdio.h>
int main() {
    int X, A, B;
    scanf("%d", &X);
    scanf("%d %d", &A, &B);
    int totalCost = A + B;
    if (X >= totalCost) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
