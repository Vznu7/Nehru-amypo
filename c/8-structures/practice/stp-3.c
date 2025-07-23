#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int  arr[100][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
    {
        scanf("%d",&arr[i][j]);
    }
    }
    printf("%d %d",arr[0][0],arr[2][1]);
    return 0;
}