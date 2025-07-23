#include<stdio.h>
int main()
{
    int a;
    if(scanf("%d",&a)!=1 || (a<=0))
    {
        printf("Invalid input");
        return 0;
    }
    else
    {
        int area=a*a;
        printf("%d square meters\n",area);
    }
}