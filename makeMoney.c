#include <stdio.h>
#include <stdlib.h>

void max_value_after_operations(int T, int test_cases[][102], int params[][3]) {
    for (int t = 0; t < T; t++) {
        int N = params[t][0], X = params[t][1], C = params[t][2];
        int *A = test_cases[t];
        
        // Sort the array
        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                if (A[i] > A[j]) {
                    int temp = A[i];
                    A[i] = A[j];
                    A[j] = temp;
                }
            }
        }
        
        int total_sum = 0, total_cost = 0;
        for (int i = 0; i < N; i++) {
            total_sum += A[i];
        }
        
        for (int i = 0; i < N; i++) {
            if (A[i] + C <= X) {
                total_sum += (X - A[i]);
                total_cost += C;
            } else {
                break;
            }
        }
        
        printf("%d\n", total_sum - total_cost);
    }
}

int main() {
    int T;
    scanf("%d", &T);
    int test_cases[T][102], params[T][3];
    
    for (int t = 0; t < T; t++) {
        scanf("%d %d %d", &params[t][0], &params[t][1], &params[t][2]);
        for (int i = 0; i < params[t][0]; i++) {
            scanf("%d", &test_cases[t][i]);
        }
    }
    
    max_value_after_operations(T, test_cases, params);
    return 0;
}
