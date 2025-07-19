#include <stdio.h>
int main()
{
    int a;
    if(scanf("%d",&a)!=1||a<=0)
    {
        printf("Invalid input");
        return 0;
    }
    int arr[a];
    for(int i = 0 ;i<a;i++)
    {
        scanf("%d ",&arr[i]);
    }
    
    for(int i = 0;i<a-1;i++)
    {
        for(int j=0;j<a-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i =0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
}