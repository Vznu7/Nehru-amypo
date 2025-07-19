#include <stdio.h>
int main()
{
    int a ,b;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    if(a<0||b<0)
    {
        printf("Invalid input");
    }
    else{
    int quotient = a/b;
    int remainder =a%b;
    printf("%d,%d",quotient,remainder);
    }
    
}