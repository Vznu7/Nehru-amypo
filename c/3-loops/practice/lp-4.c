#include <stdio.h>
int main()
{
    int n ,odd =1;
    scanf("%d",&n);
    if(n<0)
    {
        printf("Invalid input");
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int s=0;s<n-i;s++)
        {
            printf(" ");
        }
        for(int j =0;j<i;j++)
        {
            printf("%d ",odd);
            odd+=2;
        }
        printf("\n");
    }
    return 0;
}