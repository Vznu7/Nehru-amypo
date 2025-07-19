#include <stdio.h>
#include <math.h>
int main()
{
    int a ,b ;
    scanf("%d\n",&a);
    scanf("%d",&b);
    if(a<0||b<0)
    {
        printf("Invalid input");
    }
    else
    {
    int result = pow(a,b);
    printf("%d",result);
    }
    
}