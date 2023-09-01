#include <stdio.h>
#include <limits.h>

int thirdMax(int* nums, int numsSize) {
    long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > first) {
            third = second;
            second = first;
            first = nums[i];
        } else if (nums[i] > second && nums[i] != first) {
            third = second;
            second = nums[i];
        } else if (nums[i] > third && nums[i] != second && nums[i] != first) {
            third = nums[i];
        }
    }

    if (third != LONG_MIN) {
        return (int)third;
    } else {
        return (int)first;
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int nums[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }

    int result = thirdMax(nums, N);
    printf("%d
", result);

    return 0;
}
