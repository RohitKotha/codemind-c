#include <stdio.h>

int calculatePayment(int N, int weights[], int T) {
    int totalPayment = 0;

    for (int i = 0; i < N; i++) {
        if (weights[i] > T) {
            totalPayment += 2; // Double fare for weight exceeding threshold
        } else {
            totalPayment += 1; // Base fare for weight within or below threshold
        }
    }

    return totalPayment;
}

int main() {
    int N;
    scanf("%d", &N);

    int weights[N];

    // Input the weights of each luggage
    for (int i = 0; i < N; i++) {
        scanf("%d", &weights[i]);
    }

    int T;
    scanf("%d", &T);

    int result = calculatePayment(N, weights, T);
    printf("%d
", result);

    return 0;
}
