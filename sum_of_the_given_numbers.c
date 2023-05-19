#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);
    
    int i;
    for (i = 0; i < N; i++) {
        int num1, num2;
        
        scanf("%d %d", &num1, &num2);
        
        int sum = num1 + num2;
        printf("%d
", sum);
    }
    
    return 0;
}
