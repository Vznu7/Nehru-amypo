#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i < num; i++)
        if (num % i == 0) return 0;
    return 1;
}
int main() {
    int n;
    scanf("%d", &n);
    if (n < 1 || n > 10) {
        printf("Invalid Input");
        return 0;
    }
    int arr[n], sum = 0, found = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < 1 || arr[i] > 100) {
            printf("Invalid Input\n");
            return 0;
        }
        if (isPrime(arr[i])) {
            sum += arr[i];
            found = 1;
        }
    }
    if (found)
        printf("%d\n", sum);
    else
        printf("Invalid Input\n");

    return 0;
}