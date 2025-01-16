#include <stdio.h>
int main() {
    int T, X, Y;
    scanf("%d", &T); // Read number of test cases
    while (T--) {
        // Read tastiness values for chocolate and candy
        scanf("%d %d", &X, &Y);
        // Calculate total tastiness of the chocolate and candy packets
        int chocolateTastiness = 2 * X;
        int candyTastiness = 5 * Y;
        // Compare and print the result
        if (chocolateTastiness > candyTastiness) {
            printf("Chocolate\n");
        } else if (chocolateTastiness < candyTastiness) {
            printf("Candy\n");
        } else {
            printf("Either\n");
        }
    }
    return 0;
}
