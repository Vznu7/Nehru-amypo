#include <stdio.h>
int main()
{
    int a ,b;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
        int temp =a;
        a= b;
        b=temp;
    printf("%d\n",a);
    printf("%d",b);
}