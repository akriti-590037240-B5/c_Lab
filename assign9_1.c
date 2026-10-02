#include<stdio.h>

int add(int a,int b)
{
    return a+b;
}

int subtract(int a,int b)
{
    return a-b;
}

int multiply(int a,int b)
{
    return a*b;
}

float division(int a,int b)
{
    return a/b;
}

int modulus(int a,int b)
{
    return a%b;
}

int main()
{
    int x,y;

    printf("Enter two integers");
    scanf("%d %d",&x,&y);

    printf("Addition = %d\n",add(x,y));
    printf("Subtraction = %d\n",subtract(x,y));
    printf("Multiplication = %d\n",multiply(x,y));

    if(y!=0)
    {
    printf("Division = %f\n",division(x,y));
    printf("Modulus = %d\n",modulus(x,y));
    }
    else
    {
        printf("Division = not possible(division by zero)\n)");
        printf("Modulus = not possible(modulus by zero)\n");
    }

    return 0;
}