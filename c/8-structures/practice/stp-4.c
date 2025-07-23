#include<stdio.h>
int main()
{
    char str[50];
    int a,b;
    scanf("%s\n",str);
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    if((a<0) || (b<0))
    {
        printf("Invalid input");
    }
    else
    {
        printf("Product Name: %s\n",str);
        printf("Price: %d\n",a);
        printf("Quantity: %d\n",b);
    }
    return 0;
}