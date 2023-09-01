#include <stdio.h>

// Function to find the greatest common divisor (GCD) of two numbers
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int n;
    scanf("%d", &n);

    int lengths[n];

    // Input the lengths
    for (int i = 0; i < n; i++) {
        scanf("%d", &lengths[i]);
    }

    // Initialize the result with the first length
    int result = lengths[0];

    // Calculate the GCD of all lengths
    for (int i = 1; i < n; i++) {
        result = gcd(result, lengths[i]);
    }

    // Print the maximum length of the scale
    printf("%d
", result);

    return 0;
}
