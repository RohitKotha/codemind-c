#include <stdio.h>

int reverse(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return rev;
}

int square(int num) {
    return num * num;
}

int is_adam_number(int num) {
    int num_square = square(num);
    int rev_num = reverse(num);
    int rev_square = square(rev_num);
    
    if (reverse(rev_square) == num_square) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;

    scanf("%d", &num);

    if (is_adam_number(num)) {
        printf("True
");
    } else {
        printf("False
");
    }
    
    return 0;
}
