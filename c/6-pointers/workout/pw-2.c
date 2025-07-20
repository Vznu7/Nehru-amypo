// it contains the code without using pointers
#include <stdio.h>

int main() {
    int a;
    if (scanf("%d", &a) != 1 || a< 0 ) {
        printf("Invalid input");
        return 0;
    }

    int arr[a];
    for (int i = 0; i < a; i++) {
        if (scanf("%d", &arr[i]) != 1 ) {
            printf("Invalid input");
            return 0;
        }
    }
    for (int i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = a - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}