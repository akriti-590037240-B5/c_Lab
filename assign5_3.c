#include<stdio.h>

int main()
{
    float weight,height,bmi;
    printf("Enter your weight in kg: ");
    scanf("%f",&weight);
    printf("Enter the height in metre; ");
    scanf("%f",&height);

    if(weight<=0 || height<=0)
    {
        printf("Invalid weight or height");
    }
    else
    {
        bmi=weight/(height*height);
        printf("BMI=%f\n",bmi);

        if(bmi<18.5)
        {
            printf("Underweight");
        }
        else if(bmi>=18.5 && bmi<25)
        {
            printf("Normal weight");
        }
        else if(bmi>=25 && bmi<30)
        {
            printf("Overweight");
        }
        else if("bmi>=30 && bmi<35")
        {
            printf("Obesity class I");
        }
        else if(bmi>=35 && bmi<40)
        {
            printf("Obesity class II");
        }
        else
        {
            printf("Obesity class III");
        }
        }
    }
    
