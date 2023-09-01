#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int freq[10001] = {0}; // Assuming the integers are between 1 and 10000
    int maxFreq = 0;
    int maxFreqNum = 0;

    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        freq[num]++;

        if (freq[num] > maxFreq || (freq[num] == maxFreq && num < maxFreqNum)) {
            maxFreq = freq[num];
            maxFreqNum = num;
        }
    }

    printf("%d
", maxFreqNum);

    return 0;
}
