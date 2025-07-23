#include <stdio.h>
#include <ctype.h>
#include <string.h
int alpha(char str[]) {
    int len =strlen(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isalpha(str[i])) {
            return 0;
        }
    }
    return 1;
}
int main() {
    char a[101], b[101];
    scanf("%100s", a);
    scanf("%100s", b);
    if (alpha(a) && alpha(b)) {
        printf("%s%s\n", a, b);
    } else {
        printf("Invalid input\n");
    }

    return 0;
}