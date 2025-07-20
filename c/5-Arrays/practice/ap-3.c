#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n < 0 || n > 10) {
        printf("Invalid Input\n");
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int m;
    scanf("%d", &m);
    if (m < 0) {
        printf("Invalid Input\n");
        return 0;
    }
    m = m % n;
    int rotated[n];
    for (int i = 0; i < n; i++) {
        rotated[(i + m) % n] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    return 0;
}