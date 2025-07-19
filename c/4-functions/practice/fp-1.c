#include <stdio.h>
int main()
{
    int a,count =0;
    scanf("%d",&a);
    if(a<=0)
    {
        printf("Invalid Input");
    }
    else
    {
        while(a>0)
        {
            if(a>=3)
            {
              count++;
              a=a-3;
            }
            else if(a>=2)
            {
                count++;
                a=a-2;
            }
            else
            {
                count++;
                a=a-1;
            }
        }
        printf("%d",count);
    }
    
}