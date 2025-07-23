#include <stdio.h>
#include <string.h>
int main()
{
    int n , found =0;
    char fruits[100][20],search[20];
    if(scanf("%d",&n)!=1,n<1||n>100)
    {
        printf("Invalid number of fruits!");
        return 0;
    }
    
    for(int i =0;i<n;i++)
    {
        if(scanf("%19s",fruits[i])!=1)
        {
            printf("Invalid Input");
            return 0;
            
        }
    }
    
    if(scanf("%19s",search)!=1)
    {
        printf("Invalid Input");
        return 0;
        
    }
    
    for(int i=0;i<n;i++)
    {
        if(strcmp(fruits[i],search)==0)
        {
            found =1;
            break;
        }
    }
    if(found)
    {
        for(int i =0;i<n;i++)
        {
            printf("%s",fruits[i]);
            if(i<n-1)printf(" ");
        }
        printf("\n");
    }
    else{
        printf("Fruit not found!");
    }
    return 0;
    
}