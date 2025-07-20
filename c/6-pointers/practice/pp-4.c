// it contains the code without using pointers
#include <stdio.h>
int main()
{
    int a;
    if(scanf("%d",&a)!=1||a<=0||a>1000)
    {
        printf("Invalid Input");
        return 0;
    }
    float arr[1000];
    for(int i =0;i<a;i++)
    {
        scanf("%f ",&arr[i]);
        printf("%.2f ",arr[i]*2);
        
    }
    
}