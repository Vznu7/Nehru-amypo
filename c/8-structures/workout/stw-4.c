#include <stdio.h>

int main()
{
    int no;
    if (scanf("%d", &no) != 1 || no < 0)
    {
        printf("Invalid input");
        return 0;
    }

    int price = 100;
    float total = no * price;
    float discountRate;

    if (no <= 5)
        discountRate = 0.10;
    else if (no > 5 && no <= 10)
        discountRate = 0.15;
    else
        discountRate = 0.20;

    float discount = discountRate * total;
    float final_price = total - discount;

    printf("%.2f", final_price);
    return 0;
}