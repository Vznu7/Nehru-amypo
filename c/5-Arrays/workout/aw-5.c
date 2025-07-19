#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 0 || n > 10) {
        printf("Invalid input");
        return 0;
    }

    int arr[n], even = 1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 != 0) {
            even = 0;
        }
    }

    
    if (even) {
        printf("Invalid input");
    } else {
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0)
                printf("1 ");
            else
                printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}