#include <stdio.h>

int isUgly(int num) {
    if (num <= 0) {
        return 0; // Not an ugly number
    }
    
    while (num % 2 == 0) {
        num /= 2;
    }
    while (num % 3 == 0) {
        num /= 3;
    }
    while (num % 5 == 0) {
        num /= 5;
    }
    
    return num == 1; // Check if all prime factors are removed
}

int main() {
    int num;
   
    scanf("%d", &num);
    
    if (isUgly(num)) {
        printf("Ugly Number
");
    } else {
        printf("Not Ugly Number
");
    }
    
    return 0;
}
