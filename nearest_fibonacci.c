#include <stdio.h>
#include <stdlib.h>

// Function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1)
        return n;
    
    int a = 0, b = 1, c;
    
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    
    return b;
}

// Function to find the nearest Fibonacci number(s) to a given integer
void nearestFibonacci(int n) {
    int prev = 0;
    int current = 1;
    int next = prev + current;
    
    // Find the smallest Fibonacci number greater than or equal to n
    while (next <= n) {
        prev = current;
        current = next;
        next = prev + current;
    }
    
    // Calculate the distance between the nearest Fibonacci number and n
    int dist1 = abs(current - n);
    int dist2 = abs(next - n);
    
 
    
    // Check if both distances are equal
    if (dist1 == dist2) {
        printf("%d %d
", current, next);
    } else {
        // Print the nearest Fibonacci number
        if (dist1 < dist2)
            printf("%d
", current);
        else
            printf("%d
", next);
    }
}

int main() {
    int n;

   
    scanf("%d", &n);

    nearestFibonacci(n);

    return 0;
}
