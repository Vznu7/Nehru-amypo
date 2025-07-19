#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[20];
    scanf("%s", name);  

    int len = strlen(name);

    
    for (int i = 0; i < len; i++) {
        if (isdigit(name[i])) {
            printf("Invalid input\n");
            return 0;
        }
    }

    for (int i = 1; i <= len; i++) {
     
        for (int j = 0; j < len - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < i; k++) {
            printf("%c", name[k]);
            if (k != i - 1) printf(" ");
        }

        printf("\n");
    }

    return 0;
}