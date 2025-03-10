#include <stdio.h>
int main() {
    double A, B, result;
    char C;
    // Taking input
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf(" %c", &C); // Space before %c to consume newline character
    // Performing the operation
    switch(C) {
        case '+':
            result = A + B;
            break;
        case '-':
            result = A - B;
            break;
        case '*':
            result = A * B;
            break;
        case '/':
            if (B != 0)
                result = A / B;
            else {
                printf("Error: Division by zero\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1;
    } 
    // Printing result with precision up to 6 decimal places
    printf("%.6lf\n", result);
    
    return 0;
}
