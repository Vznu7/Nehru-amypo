#include<stdio.h>
int main()
{
    float bmi;
    scanf("%f",&bmi);
    if(bmi<18.5)
    {
        printf("Underweight");
    }
    else if(bmi>=18.5 && bmi<=24.9)
    {
        printf("Normal weight");
    }
    else
    {
        printf("Overweight");
    }
return 0;
    
    }