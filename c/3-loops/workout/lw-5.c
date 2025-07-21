#include<stdio.h>

void main()
{
    int n;
    if(scanf("%d",&n)!=1)
    {
        printf("Invalid Input\n");
    }
    if(n<0 || n>=10)
    {
        printf("Invalid Input\n");
    }
    int size =2*n-1;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            int top=i;
            int left=j;
            int right=size-1-j;
            int bottom= size-1-i;
            int min=top;
            if(left<min)min=left;
            if(right<min)min=right;
            if(bottom<min)min=bottom;
            printf("%d",n-min);
            
        }
        printf("\n");
    }
}