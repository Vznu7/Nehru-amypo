#include <stdio.h>

int main() {
    int a, b, c;
    if (scanf("%d", &a) != 1 || scanf("%d", &b) != 1 || scanf("%d", &c) != 1) {
        printf("Invalid input\n");
        return 0;
    }

    if (a < 0 || a > 1000000 || b < 0 || b > 1000000 || (c != 0 && c != 1)) {
        printf("Invalid input\n");
    } else if (c == 0) {
        printf("Account Inactive\n");
    } else if (a > b) {
        printf("Insufficient Balance\n");
    } else {
        float d = b - a;
        printf("%.2f\n", d);
    }

    return 0;
}