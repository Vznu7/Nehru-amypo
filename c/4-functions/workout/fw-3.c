#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    long fact =1;
    scanf("%d",&a);
    if(a<0)
    {
        printf("Invalid input");
    }
    else
    {
        
         for(int i = 1;i<=a;i++)
         {
             fact*=i;
         }
         printf("%ld\n",fact);
         
    }
}