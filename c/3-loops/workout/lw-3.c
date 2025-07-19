#include <stdio.h>
int main()
{
    int a,b;
    int sum =0;
    scanf("%d %d\n",&a,&b);
    if(a<0||b<0||a>b)
    {
        printf("Invalid input\n");
    }
    else
        {
            for(int i =a;i<=b;i++)
            {
                if(i%7==0)
                {
                    sum+=i;
                }
            }printf("%d\n",sum);
        }
}

/