#include <stdio.h>
int main()
{
    int a;
    scanf("%d\n",&a);
    if(a%2==0||a>10||a<0)
    {
        printf("Invalid Input\n");
        
    }
    else
    {
        for(int i =a;i>=1;i-=2)
        {
            int s=(a-i)/2;
            for(int j =0;j<s;j++)
            {
                printf(" ");
            }
            for(int k=1;k<=i;k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}