#include <stdio.h>
int main()
{
    int a;
    scanf("%d\n",&a);
    if(a>=18)
    {
        printf("Eligible");
        
    }
    else if(a<0)
        printf("Invalid input");

    else
        printf("Not eligible");
        return 0;
}