#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N < 4 || N > 100) {
        printf("It is not possible
");
        return 0;
    }

    int arr[N];

    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int firstMax = arr[0];
    int secondMax = -1;
    int thirdMax = -1;

    for (int i = 1; i < N; i++) {
        if (arr[i] > firstMax) {
            thirdMax = secondMax;
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] < firstMax && (secondMax == -1 || arr[i] > secondMax)) {
            thirdMax = secondMax;
            secondMax = arr[i];
        } else if (arr[i] < secondMax && (thirdMax == -1 || arr[i] > thirdMax)) {
            thirdMax = arr[i];
        }
    }

    if (thirdMax != -1) {
        printf("%d
", thirdMax);
    } else {
        printf("It is not possible
");
    }

    return 0;
}
