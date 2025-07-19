#include <stdio.h>
int main()
{
    int a;
    scanf("%d\n",&a);
    if(a>=1&&a<=5)
    {
        printf("5%%\n");
        
    }
    else if(a>=6&&a<=10)
        printf("10%%");
    else if(a>10)
        printf("15%%\n");
    else
        printf("Invalid Input");
    
}