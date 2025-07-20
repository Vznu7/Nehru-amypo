#include <stdio.h>
int main()
{
    int a;
    if(scanf("%d",&a)!=1||a<=0)
    {
        printf("Invalid Input");
        return 0;
    }
    
    int arr[a][a];
    for(int i =0;i<a;i++)
    {
        for(int j =0;j<a;j++)
        {
            scanf("%d ",&arr[i][j]);
        }printf("\n");
    }
    
    int sum =0;
    int product =1;
    for(int i =0;i<a;i++)
    {
        for(int j =i;j==i;j++)
        {
           sum+=arr[i][j];
           product*=arr[i][j];
        }
    }
    printf("Sum:%d\n",sum);
    printf("Product:%d",product);
    
}