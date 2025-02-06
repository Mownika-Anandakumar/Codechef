#include <stdio.h>
void find_winner(int A, int B) {
    int turn = 1;
    while (1) {
        if (turn % 2 == 1) {  // Limak's turn
            if (A < turn) {
                printf("Bob\n");
                return;
            }
            A -= turn;
        } else {  // Bob's turn
            if (B < turn) {
                printf("Limak\n");
                return;
            }
            B -= turn;
        }
        turn++;
    }
}
int main() {
    int T, A, B;
    scanf("%d", &T);
    
    while (T--) {
        scanf("%d %d", &A, &B);
        find_winner(A, B);
    }
    return 0;
}
