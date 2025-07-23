#include <stdio.h>

int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    if (m<=0 || n<=0)
    {
        printf("Invalid input");
        return 0;
    }
    int matrix[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int maxSum = -2147483648;
    int maxIndex = -1;
    for (int i = 0; i < m; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += matrix[i][j];
        }

        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxIndex = i;
        }
    }

    printf("%d\n", maxIndex);

    return 0;
}