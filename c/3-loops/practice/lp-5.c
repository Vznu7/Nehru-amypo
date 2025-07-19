#include <stdio.h>

int main() {
    int n, m, num;
    scanf("%d %d %d", &n, &m, &num);

    if (num != 0 && num != 1) {
        printf("Invalid input\n");
        return 0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", num);
        }
        printf("\n");
    }

    return 0;
}