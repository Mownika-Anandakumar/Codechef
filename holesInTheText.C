#include <stdio.h>

int count_holes(char ch) {
    // Function to return the number of holes in a given character
    if (ch == 'A' || ch == 'D' || ch == 'O' || ch == 'P' || ch == 'Q' || ch == 'R')
        return 1;
    else if (ch == 'B')
        return 2;
    else
        return 0;
}

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        char text[101];
        scanf("%s", text); // Read the text input

        int total_holes = 0;
        for (int i = 0; text[i] != '\0'; i++) {
            total_holes += count_holes(text[i]);
        }

        printf("%d\n", total_holes); // Output the total number of holes
    }

    return 0;
}
