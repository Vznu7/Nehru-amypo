#include <stdio.h>
#include <math.h>
int main()
{
    int countdigit(int a)
    {
        int count =0;
        while(a>0)
        {
            count++;
            a/=10;
        }
        return count;
    }
    
     int armstrong(int a)
     {  int power =countdigit(a);
         int sum =0;
         while(a>0)
         {
             int lastdigit =a%10;
             sum+=pow(lastdigit,power);
             a=a/10;
         }
         return sum;
     }
     int a;
     scanf("%d",&a);
     if(a<0)
     {
         printf("Invalid Input");
     }
     else
     {
         int result = armstrong(a);
         if(result==a)
         {
            printf("Armstrong");
         }
         else
         {
            printf("Not Armstrong") ;
         }
         
     }
}