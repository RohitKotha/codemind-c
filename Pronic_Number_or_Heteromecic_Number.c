#include <stdio.h>

// Function to check if a number is pronic or not
int isPronic(int num) {
    for (int i = 0; i <= num; i++) {
        if (i * (i + 1) == num) {
            return 1; // Number is pronic
        }
    }
    return 0; // Number is not pronic
}

int main() {
    int num;

    scanf("%d", &num);

    if (isPronic(num)) {
        printf("YES
");
    } else {
        printf("NO
");
    }

    return 0;
}
