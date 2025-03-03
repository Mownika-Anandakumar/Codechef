#include <stdio.h>
// Function to calculate the sum of digits of a number
int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;  // Extract the last digit and add to sum
        num /= 10;        // Remove the last digit
    }
    return sum;
}
// Function to find the maximum sum of digits of product of two different elements
int max_digit_sum_product(int arr[], int n) {
    int max_sum = 0;
    // Try all pairs (i, j) where i < j
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int product = arr[i] * arr[j];
            int digit_sum = sum_of_digits(product);
            if (digit_sum > max_sum) {
                max_sum = digit_sum;
            }
        }
    }    
    return max_sum;
}
int main() {
    int t;
    scanf("%d", &t); // Read number of test cases
    while (t--) {
        int n;
        scanf("%d", &n); // Read number of elements
        int arr[n];
        // Read array elements
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        // Compute and print the result for the test case
        printf("%d\n", max_digit_sum_product(arr, n));
    }
    return 0;
}
