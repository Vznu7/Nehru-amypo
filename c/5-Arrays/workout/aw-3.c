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
    for(int i = 0 ;i<a;i++)
    {
        scanf("%d ",&arr[i]);
    }
    int first = arr[0];
    for(int i =0 ;i<a;i++)
    {
        arr[i] =arr[i+1];
    }
    arr[a-1]=first;
     for(int i =0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }

    
    
}