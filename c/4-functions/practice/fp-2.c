#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[20];
    scanf("%s", str); 
    int len = strlen(str);
    for (int i = 0; i<len; i++) {
        if (str[i] == '0')
            str[i] = '1'; 
    }
    int result = atoi(str);  
    printf("%d\n", result);

    return 0;
}