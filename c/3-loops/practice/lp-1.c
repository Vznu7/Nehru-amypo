#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n < 0 || n > 1000) {
        printf("Invalid input\n");
    } else {
        
    
        for (int i = 1; i * i <= n; i++) {
            printf("%d ", i * i);
        }
        printf("\n");
    }

    return 0;
}