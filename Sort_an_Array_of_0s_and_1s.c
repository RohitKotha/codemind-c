#include <stdio.h>

void segregateArray(int n, int arr[]) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        while (arr[left] == 0 && left < right)
            left++;
        while (arr[right] == 1 && left < right)
            right--;

        if (left < right) {
            arr[left] = 0;
            arr[right] = 1;
            left++;
            right--;
        }
    }
}

int main() {
    int n;
  
    scanf("%d", &n);

    int arr[n];
   
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    segregateArray(n, arr);

    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    return 0;
}
