#include <stdio.h>
int main()
{
    int a;
    scanf("%d\n",&a);
    if(a<0||a>10000)
    {
        printf("Invalid input");
    }
    else{
        for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            printf("%d ",i);
        }
    }
    
    }
}