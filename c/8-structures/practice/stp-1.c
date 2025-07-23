#include <stdio.h>
#include <string.h>

int main() {
    char str[101], ch;
    int count = 0;
    scanf("%s", str);
    scanf(" %c", &ch);  
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    if (count == 0) {
        printf("-1\n");
    } else {
        printf("%d\n", count);
    }

    return 0;
}
