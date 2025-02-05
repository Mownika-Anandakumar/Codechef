#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    if (X <= 2050 && (X + 25) >= 2050) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
