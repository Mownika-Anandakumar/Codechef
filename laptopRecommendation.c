#include <stdio.h>

void findLaptop(int n, int arr[]) {
    int freq[11] = {0}; // Array to count occurrences of laptops (1-10)
    int maxFreq = 0, maxLaptop = -1, count = 0;
    
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] > maxFreq) {
            maxFreq = freq[arr[i]];
            maxLaptop = arr[i];
            count = 1;
        } else if (freq[arr[i]] == maxFreq && arr[i] != maxLaptop) {
            count++;
        }
    }
    
    if (count > 1) {
        printf("CONFUSED\n");
    } else {
        printf("%d\n", maxLaptop);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        
        findLaptop(n, arr);
    }
    
    return 0;
}
