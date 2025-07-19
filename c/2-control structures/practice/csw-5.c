#include <stdio.h>
int main()
{
    float a;
    scanf("%f\n",&a);
    if(a>=1&&a<=5)
        printf("100 USD\n");
    else if(a>5&&a<=20)
        printf("200 USD\n");
    else if(a>20&&a<=50)
        printf("300 USD\n");
    else
        printf("Invalid Input");
}