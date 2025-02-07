#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 100000  // Maximum difference (n - m) allowed
#define LMT 100000  // Upper limit for small prime sieve
// Array to store small prime numbers
bool isPrime[LMT + 1];
int primes[LMT], primeCount = 0;
// Function to compute small primes using Sieve of Eratosthenes
void simpleSieve() {
    for (int i = 0; i <= LMT; i++) isPrime[i] = true;
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime
    for (int i = 2; i * i <= LMT; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= LMT; j += i)
                isPrime[j] = false;
        }
    }
    // Store all prime numbers found
    for (int i = 2; i <= LMT; i++) {
        if (isPrime[i]) primes[primeCount++] = i;
    }
}
// Function to find primes in a given range using Segmented Sieve
void segmentedSieve(long long m, long long n) {
    bool rangePrime[MAX + 1]; // Boolean array to mark primes in range
    for (int i = 0; i <= (n - m); i++) rangePrime[i] = true;
    // Mark multiples of small primes
    for (int i = 0; i < primeCount; i++) {
        long long p = primes[i];
        // Find the smallest multiple of p in the range [m, n]
        long long start = (m % p == 0) ? m : (m / p) * p;
        if (start < m) start += p;
        if (start == p) start += p; // Skip the prime itself
        for (long long j = start; j <= n; j += p) {
            rangePrime[j - m] = false;
        }
    }
    // Print all prime numbers in the range
    for (long long i = m; i <= n; i++) {
        if (rangePrime[i - m] && i > 1) printf("%lld\n", i);
    }
}
// Main function
int main() {
    int t;
    scanf("%d", &t); // Read number of test cases
    simpleSieve(); // Precompute small primes
    while (t--) {
        long long m, n;
        scanf("%lld %lld", &m, &n);
        segmentedSieve(m, n);
        printf("\n"); // Separate test case outputs with a blank line
    }
    return 0;
}
