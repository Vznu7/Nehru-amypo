#include <stdio.h>
#include <string.h>

int main() {
    char message[1001];
    int start, length;
    
    if (!fgets(message, sizeof(message), stdin)) {
        printf("Invalid input\n");
        return 0;
    }

    size_t msg_len = strlen(message);
    if (msg_len > 0 && message[msg_len - 1] == '\n') {
        message[msg_len - 1] = '\0';
        msg_len--;
    }

    if (scanf("%d", &start) != 1 || scanf("%d", &length) != 1) {
        printf("Invalid input\n");
        return 0;
    }


    if (start < 0 || length < 1 || start + length > msg_len) {
        printf("Invalid input\n");
        return 0;
    }

    for (int i = start; i < start + length; i++) {
        putchar(message[i]);
    }
    putchar('\n');
    
    return 0;
}