#include <stdio.h>
int main() {
    int a;
    scanf("%d\n",&a);
    if(a>=1&&a<=3)
        {
            printf("1\n");
            printf("1\n");
            
        }
    else if(a>=4&&a<=6)
    {
        printf("2\n");
        printf("1\n");
        
    }
    else if(a>=7&&a<=9)
    {
         printf("3\n");
         printf("2\n");
         printf("1\n");
    }
     else if(a==10)
    {
         printf("5\n");
         printf("3\n");
         printf("2\n");
         printf("1\n");
    }
    else{
         printf("Invalid input");
    }
}