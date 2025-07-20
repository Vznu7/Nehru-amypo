// it contains the code without using pointers
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int a;
    if (scanf("%d", &a) != 1 || a <= 0 ) {
        printf("Invalid input");
        return 0;
    }
    char arr[101];  
    int even = 0, odd = 0;
    for (int i = 0; i < a; i++) {
        if (scanf(" %c", &arr[i]) != 1 || !isalpha(arr[i])) {
            printf("Invalid input");
            return 0;
        }
    }
    for (int i = 0; i < a; i++) {
        int ascii = (int)arr[i];
        if (ascii % 2 == 0)
            even += ascii;
        else
            odd += ascii;
    }
    int result =abs(even - odd);
    printf("%d",result);
    return 0;
}