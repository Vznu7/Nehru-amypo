#include <stdio.h>
#include <string.h>
int main()
{
    char bin[33];
    scanf("%s",bin);
    int len = strlen(bin);
    if(len>32)
    {
        printf("Invalid Input");
        return 0;
    }
    for(int i =0;i<len;i++)
    {
        if(bin[i]!='0'&&bin[i]!='1')
        {
            printf("Invalid Input");
            return 0;
        }
    }
    int result =0;
    int value =0;
    if(bin[0]=='1')
    {   
        for(int i =0;i<len;i++)
        {
            value =value*2 +(bin[i]=='0'?1:0);
        }
        value+=1;
        result=-value;
    }
    else
    {
        for(int i =0;i<len;i++)
        {
            result = result*2+(bin[i] -'0');
        }
    }
    printf("%d",result);
    
}