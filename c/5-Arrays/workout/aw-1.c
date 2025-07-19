#include <stdio.h>
int main()
{   int a;
    if(scanf("%d\n",&a)!=1||a<=0)
    {
        printf("Invalid input");
        return 0;
    }
    int arr[a];
    for(int i =0;i<a;i++)
    {
        scanf("%d ",&arr[i]);
    }
    {
        for(int i =0;i<a;i++)
        {
            int isduplicate =0;
            for(int j=0;j<i;j++)
            {
                if(arr[i]==arr[j])
                {
                    isduplicate =1;
                    break;
                }
            }
             if(!isduplicate)
                {
                    printf("%d ",arr[i]);
                }
        }
    }
}