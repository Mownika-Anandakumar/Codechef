#include <stdio.h>
#include <stdlib.h>
int main(){
    int T;
    scanf("%d", &T);
    // For each test case:
    while(T--){
        int N, K;
        scanf("%d %d", &N, &K);
        int *A = (int *)malloc(N * sizeof(int));
        for (int i = 0; i < N; i++){
            scanf("%d", &A[i]);
        }
        // Pointers for the initial array:
        int L = 0, R = N - 1;
        int *newArr = (int *)malloc((K+1) * sizeof(int));
        int newFront = 0;  // index of the front element in newArr
        int newCount = 0;  // current size of newArr
        if(K > 0) {  // K is at least 1 since K < N
            int x = A[L++];
            int y = A[R--];
            int sum = x + y;
            newArr[newCount++] = sum;
        }
        // Perform operations 2 to K:
        for (int op = 2; op <= K; op++){
            int x; 
            // Determine overall minimum:
            if (L <= R) {
                // initial array still has elements;
                // since initial part is smaller than any new element, take from A.
                x = A[L++];
            } else {
                // no initial elements remain, take the smallest from newArr (front element)
                x = newArr[newFront++];
            }
            // Overall maximum is always from the newArr (back element).
            int y = newArr[--newCount];  // remove the last element from newArr
            int sum = x + y;
            // Push the new sum into newArr at the back.
            newArr[newCount++] = sum;
        }
        // First print the leftover initial part:
        for (int i = L; i <= R; i++){
            printf("%d ", A[i]);
        }
        // Then print the new elements:
        for (int i = newFront; i < newCount; i++){
            printf("%d ", newArr[i]);
        }
        printf("\n");  
        free(A);
        free(newArr);
    }
    return 0;
}
