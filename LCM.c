#include <stdio.h>

// Function to find the GCD (Greatest Common Divisor) using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate the LCM (Least Common Multiple) of two numbers
int lcm(int a, int b) {
    // Calculate the product of the numbers
    int product = a * b;
    
    // Calculate the GCD of the numbers
    int gcdValue = gcd(a, b);
    
    // Calculate the LCM using the formula: LCM(a, b) = (a * b) / GCD(a, b)
    int lcmValue = product / gcdValue;
    
    return lcmValue;
}

int main() {
    int a, b;

    
    scanf("%d %d", &a, &b);

    int lcmValue = lcm(a, b);

    printf("%d
", lcmValue);

    return 0;
}
