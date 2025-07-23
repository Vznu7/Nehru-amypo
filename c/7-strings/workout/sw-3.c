#include <stdio.h>

int is_valid_input(int num) {
    return num >= -1000 && num <= 1000;
}

int is_palindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int input;

    if (scanf("%d", &input) != 1 || input != (int)input) {
        printf("Invalid input\n");
        return 0;
    }

     int number = input;

    if (!is_valid_input(number) || number < 0) {
        printf("Invalid input\n");
        return 0;
    }

    number++;
    while (!is_palindrome(number)) {
        number++;
    }

    printf("%d\n", number);
    return 0;
}