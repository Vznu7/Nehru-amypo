#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid input\n");
        return 0;
    }

    char words[100][101];  
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }
    char prefix[101];
    strcpy(prefix, words[0]);

    for (int i = 1; i < n; i++) {
        int j = 0;
        while (prefix[j] && words[i][j] && prefix[j] == words[i][j]) {
            j++;
        }
        prefix[j] = '\0';  

        if (strlen(prefix) == 0) {
            printf("Invalid input\n");
            return 0;
        }
    }

    printf("%s\n", prefix);
    return 0;
}