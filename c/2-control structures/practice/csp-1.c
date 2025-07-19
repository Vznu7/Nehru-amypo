#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d\n",&a ,&b);
    c=180;
    d=a+b;
    if(a<0||b<0||d>180)
    printf("Invalid input");
    else
        {
         e=c-d;
         printf("%d\n",e);
        }
    
    
}