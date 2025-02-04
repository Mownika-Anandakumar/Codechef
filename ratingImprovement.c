#include <stdio.h>
int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Reading number of test cases
    while (T--) {
        int X, Y; // X is the current rating, Y is the difficulty of the problem Chef is solving
        scanf("%d %d", &X, &Y); // Reading X and Y
        // Check if the problem difficulty is within the recommended range
        if (Y >= X && Y <= X + 200) {
            printf("YES\n"); // Chef is following the recommended practice
        } else {
            printf("NO\n"); // Chef is not following the recommended practice
        }
    } 
    return 0;
}
