#include <stdio.h>
int main() {
    int T, X;
    // Read the number of test cases
    scanf("%d", &T);
    while (T--) {
        // Read spice level
        scanf("%d", &X);
        // Categorize spice level
        if (X < 4) {
            printf("MILD\n");
        } else if (X < 7) {
            printf("MEDIUM\n");
        } else {
            printf("HOT\n");
        }
    }
    return 0;
}
