#include<stdio.h>

enum Result 
{
        FAIL=1,
        PASS,
        DISTINCTION
};

enum Result calculateresult(float average)
{
    if(average >= 75)
        return DISTINCTION;
    else if(average >= 40)
        return PASS;
    else
        return FAIL;
}

int main()
{
    float average;
    enum Result result;

    printf("Enter the average marks: ");
    scanf("%f", &average);

    if(average < 0 || average > 100)
    {
        printf("Invalid average marks. Please enter a value between 0 and 100.\n");
        return 0;
    }

    result = calculateresult(average);

    printf("Result :");

    switch(result)
    {
        case FAIL:
            printf("Result: Fail\n");
            break;
        case PASS:
            printf("Result: Pass\n");
            break;
        case DISTINCTION:
            printf("Result: Distinction\n");
            break;
    }

    return 0;
}