#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long N, A, B, K;
        scanf("%lld %lld %lld %lld", &N, &A, &B, &K);

        // Calculate problems solved by Venkat (divisible by B but not divisible by A)
        long long problems_by_Venkat = N / B - (N / (A * B));

        // Calculate problems solved by Franklin (divisible by A but not divisible by B)
        long long problems_by_Franklin = N / A - (N / (A * B));

        if (problems_by_Venkat + problems_by_Franklin >= K) {
            printf("Win
");
        } else {
            printf("Lose
");
        }
    }

    return 0;
}
