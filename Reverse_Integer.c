#include <stdio.h>
#include <limits.h>

int reverse(int x) {
    int reversed = 0;
    
    while (x != 0) {
        // Check for integer overflow
        if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10)
            return 0;
        
        // Extract the last digit
        int digit = x % 10;
        
        // Update the reversed number
        reversed = reversed * 10 + digit;
        
        // Remove the last digit from the original number
        x /= 10;
    }
    
    return reversed;
}

int main() {
    int num;


    scanf("%d", &num);

    int reversedNum = reverse(num);

    printf("%d
", reversedNum);

    return 0;
}
