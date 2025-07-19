#include <stdio.h>

int main()
{
    int a, b, sum = 0;
    if (scanf("%d", &a) != 1 || a <= 0) {
        printf("No readings provided");
        return 0;
    }
    for (int i = 0; i < a; i++) {
        scanf("%d ", &b);
        sum += b;
    }

    float average = (float)sum / a;
    printf("%.2f", average);

    return 0;
}