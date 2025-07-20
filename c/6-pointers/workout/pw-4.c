// it contains the code without using pointers
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    if(scanf("%d %d",&a,&b)!=2||a<0||b<0||a>10||b>10)
    {
        printf("Invalid input");
        return 0;
    }
    int c =pow(a,b);
    printf("%d",c);
}