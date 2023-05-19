#include <stdio.h>

int main() {
    long long X;
    scanf("%lld", &X);

    long long result;
    if (X >= 0) {
        result = X / 10;
    } else {
        result = (X - 9) / 10;
    }

    printf("%lld
", result);

    return 0;
}
