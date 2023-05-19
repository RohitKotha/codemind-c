#include <stdio.h>

int isSpyNumber(int num) {
    int digit_sum = 0;
    int digit_product = 1;
    int temp = num;

    // Calculate the sum and product of the digits
    while (temp > 0) {
        int digit = temp % 10;
        digit_sum += digit;
        digit_product *= digit;
        temp /= 10;
    }

    // Check if the number is a spy number
    if (digit_sum == digit_product) {
        return 1; // True
    } else {
        return 0; // False
    }
}

int main() {
    int num;

    scanf("%d", &num);

    if (isSpyNumber(num)) {
        printf("Spy Number
");
    } else {
        printf("Not Spy Number
");
    }

    return 0;
}
