#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[1001], filtered[1001];
    int i, j = 0, len;

    fgets(s, sizeof(s), stdin);

    len = strlen(s);
    if (len > 0 && s[len-1] == '\n') {
        s[len-1] = '\0';
    }


    for (i = 0; s[i] != '\0'; ++i) {
        if (isalnum((unsigned char)s[i])) {
            filtered[j++] = tolower((unsigned char)s[i]);
        }
    }
    filtered[j] = '\0';

    // Check if filtered string is a palindrome
    int l = 0, r = j - 1, is_palindrome = 1;
    while (l < r) {
        if (filtered[l] != filtered[r]) {
            is_palindrome = 0;
            break;
        }
        l++;
        r--;
    }

    if (is_palindrome)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}