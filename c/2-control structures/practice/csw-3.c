#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    if(a>0&&b>0)
    {
        c=a+b;
        printf("%d\n",c);
    }
    else
        printf("Invalid input");
    
}