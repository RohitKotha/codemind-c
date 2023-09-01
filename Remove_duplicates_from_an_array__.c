#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];

    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Check for and remove duplicates
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                // Shift elements to fill the gap
                for (int k = j; k < N - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                N--; // Reduce the array size
                j--; // Adjust the index
            }
        }
    }

    // Display unique values
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
