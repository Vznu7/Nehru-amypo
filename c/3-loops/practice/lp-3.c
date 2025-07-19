#include <stdio.h>

int main() {
    int first = 0, second = 1, next;
    int limit;
    scanf("%d", &limit);

    if (limit < 0 || limit > 100) {
        printf("Invalid input\n");
    } else {
        while (first <= limit) {
            printf("%d ", first);
            next = first + second;
            first = second;
            second = next;
        }
    }

    return 0;
}