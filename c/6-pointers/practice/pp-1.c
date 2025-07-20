// it contains the code without using pointers
#include <stdio.h>

int main() {
    int a;
    if(scanf("%d", &a)!=1||a <= 0 || a > 10)
    {
        printf("Invalid Input");
        return 0;
    }
    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    if(scanf("%d", &k)!=1||k < 1 || k > a)
    {
        printf("Invalid Input");
        return 0;
    }

    for (int i = 0; i < a - 1; i++) {
        for (int j = 0; j < a - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("%d", arr[k - 1]);

    return 0;
}