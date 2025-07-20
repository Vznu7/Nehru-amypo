//Note : 2 test cases are failed code
//if anyone have the code with all successful test case send the pull request with that code


#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    if(scanf("%d",&a)!=1||a<0||a>100)
    {
        printf("Invalid input");
        return 0;
    }
    
    
    char fruits[a][20];
    for(int i =0;i<a;i++)
    {
    scanf("%s ",fruits[i]);
    }
    
    
    char search[20];
    scanf("%s",search);
    
    
    int found =0;
    for(int i =0;i<a;i++)
    {
        if(strcmp(fruits[i],search)==0)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        for(int i =0;i<a;i++)
        {
            printf("%s ",fruits[i]);
        }
    }
    else{
        printf("Fruit not found!");
    }
}