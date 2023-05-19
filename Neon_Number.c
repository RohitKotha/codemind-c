#include <stdio.h>

int isNeonNumber(int num) {
    int square = num * num;
    int digit_sum = 0;
    int temp = square;

    // Calculate the sum of the digits of the square
    while (temp > 0) {
        int digit = temp % 10;
        digit_sum += digit;
        temp /= 10;
    }

    // Check if the number is a neon number
    if (digit_sum == num) {
        return 1; // True
    } else {
        return 0; // False
    }
}

int main() {
    int num;

    
    scanf("%d", &num);

    if (isNeonNumber(num)) {
        printf("Neon Number
");
    } else {
        printf("Not Neon Number
");
    }

    return 0;
}
