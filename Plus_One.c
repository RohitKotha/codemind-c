#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int digits[N];

    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &digits[i]);
    }

    int carry = 1; // Initialize carry to 1 to add one to the number

    // Traverse the array from right to left
    for (int i = N - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        digits[i] = sum % 10; // Update the digit at this position
        carry = sum / 10;    // Update the carry for the next position

        // If there's no carry, we're done
        if (carry == 0) {
            break;
        }
    }

    // If there's still a carry, we need to add an additional digit
    if (carry != 0) {
        printf("%d ", carry);
    }

    // Print the updated digits
    for (int i = 0; i < N; i++) {
        printf("%d ", digits[i]);
    }

    return 0;
}
