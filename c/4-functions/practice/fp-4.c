#include <stdio.h>
int main()
{
     int p(int a)
    {
            int n =a*(3*(a) -1);
            int p =n/2;
            return p;
    }
    int a;
    scanf("%d",&a);
    if(a<0)
    {
        printf("Invalid Input");
    }
    else
    {   for(int i=1;i<=a;i++)
        {
        int result =p(i);
        printf("%d\n",result);
        }
    }
}