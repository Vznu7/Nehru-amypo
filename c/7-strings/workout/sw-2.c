#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValid(char str[]) {
    int len = strlen(str);
    if (len < 1 || len > 10)
        return 0;
    for (int i = 0; i < len; i++) {
        if (!isalpha(str[i]))
            return 0;
    }
    return 1;
}

void sortString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str1[20], str2[20];

    scanf("%s", str1);
    scanf("%s", str2);

    if (!isValid(str1) || !isValid(str2)) {
        printf("Invalid input\n");
        return 0;
    }

    if (strlen(str1) != strlen(str2)) {
        printf("NO\n");
        return 0;
    }

    sortString(str1);
    sortString(str2);

    if (strcmp(str1, str2) == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}