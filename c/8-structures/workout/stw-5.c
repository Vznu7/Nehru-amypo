#include<stdio.h>
int main()
{
    int r,h;
    float a,v;
    scanf("%d%d",&r,&h);
    scanf("%f%f",&a,&v);
    if((r<0)||(h<0))
    {
        printf("Invalid input");
    }
    else 
    {
        a=(2*3.14159265389793*r)*(r+h);
        v=((3.14159265389793)*(r*r)*h);
        printf("Surface Area: %.2f\n",a);
        printf("Volume: %.2f\n",v);
    }
    return 0;
}