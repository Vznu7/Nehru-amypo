#include <stdio.h>
int main()
{
    int a;
    if(scanf("%d",&a)!=1||a<=0)
    {
        printf("Invalid Input");
        return 0;
    }
    
    int arr[a];
    for(int i =0;i<a;i++)
    {
        scanf("%d ",&arr[i]);
    }
    int no_zero =0;
    for(int i =0;i<a;i++)
    {
        if(arr[i]!=0)
        {
            arr[no_zero++]=arr[i];
        }
    }
    while(no_zero<a)
    {
        arr[no_zero++]=0;
    }
    for(int i =0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}