// it contains the code without using pointers
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char a[101]; 
    scanf("%s", a);
    int len =strlen(a);
    char min = a[0];
    for (int i = 0; i<len; i++) {
        if (!isalpha(a[i])) {
            printf("Invalid input");
            return 0;
        }
        if (a[i] < min) {
            min = a[i];
        }
    }

    printf("%c", min);
    return 0;
}