// it contains the code without using pointers
#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    if(scanf("%d",&a)!=1||a<0)
    {
        printf("Invalid input");
        return 0;
    }
    int count =0;
    int temp=a;
    while(temp>0)
    {
        count++;
        temp/=10;
    }
    int sum =0;
    temp=a;
    while(temp>0)
    {
        int digit =temp%10;
        sum +=pow(digit,count);
        temp/=10;
    }
    if(sum==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}