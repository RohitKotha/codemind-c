#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    if (pricesSize <= 1) {
        return 0;
    }

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }

    return maxProfit;
}

int main() {
    int N;
    scanf("%d", &N);

    int prices[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &prices[i]);
    }

    int result = maxProfit(prices, N);
    printf("%d
", result);

    return 0;
}
