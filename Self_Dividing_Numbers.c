#include <stdio.h>
#include <stdbool.h>

bool isSelfDividing(int num) {
    int temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit == 0 || num % digit != 0) {
            return false;
        }
        temp /= 10;
    }
    return true;
}

void selfDividingNumbers(int left, int right) {
    for (int num = left; num <= right; num++) {
        if (isSelfDividing(num)) {
            printf("%d ", num);
        }
    }

}

int main() {
    int left;
    int right;
    scanf("%d %d",&left,&right);
    selfDividingNumbers(left, right);
    return 0;
}
