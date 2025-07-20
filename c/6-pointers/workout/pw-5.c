// it contains the code without using pointers
#include <stdio.h>
int main()
{
    int a;
    if(scanf("%d",&a)!=1||a<0||a>1000)
    {
        printf("Invalid Input");
        return 0;
    }
    
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d ",&arr[i]);
        
    }
    int min =0,max =0;
    for(int i=1;i<a;i++)
    {
        if(arr[i]<arr[min])
            min =i;
        if(arr[i]>arr[max])
            max = i;
    }
    
    int temp =arr[min];
    arr[min] =arr[max];
    arr[max]=temp;
    
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
}