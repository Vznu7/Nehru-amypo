// it contains the code without using pointers
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    int a[10];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int m;
    scanf("%d", &m);

    if (m <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    int b[10];
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    
    int result[20];
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            result[k++] = a[i++];
        } else {
            result[k++] = b[j++];
        }
    }

  
    while (i < n) {
        result[k++] = a[i++];
    }

    while (j < m) {
        result[k++] = b[j++];
    }

    
    for (int x = 0; x < k; x++) {
        printf("%d ", result[x]);
    }
    printf("\n");

    return 0;
}