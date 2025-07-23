#include <stdio.h>
int main()
{
    float r,a;
    float pi=3.141592653;
    if(scanf("%f",&r)!=1 || r<0 || r>100.0)
    {
        printf("Invalid input");
        return 0;
    }
    else
    {
        a=pi*r*r;
        printf("%.2f\n",a);
    }
}