#include<stdio.h>

int main() {
    int T, S;
    scanf("%d", &T);  
    while (T--) {
        scanf("%d", &S); 
        printf("%d\n", S * 24 * 1000);  
    }
    return 0;
}
