#include <stdio.h>
int main() {
    int X, Y;    
    // Read input values
    scanf("%d %d", &X, &Y);
    // Calculate the weekly cost
    int weekly_cost = (6 * X) + Y;
    // Print the result
    printf("%d\n", weekly_cost);
    return 0;
}
