#include<stdio.h>

int main()
{
    int age,creditscore;
    float income;
    printf("Enter age");
    scanf("%d", &age);
    printf("Enter income");
    scanf("%f", &income);
    printf("Enter the creditscore");
    scanf("%d", &creditscore);
    if(age >= 21 && age <= 60 && income > 35000 && creditscore >= 750)
    {
        printf("Person is eligible for loan\n");
    }
    else
    {
        printf("Person is not eligible for loan\n");
    }
    return 0;
}