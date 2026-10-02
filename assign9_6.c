#include<stdio.h>

void arithematic(int a,int b,int *sum,int *diff,int *product,int *quotient)
{
    *sum = a+b;
    *diff = a-b;
    *product = a*b;

    if(b != 0)
    *quotient = a/b;
else
*quotient = 0;
}

int main()
{
    int a,b;
    int sum,diff,product,quotient;

    printf("Enter two integers:");
    scanf("%d %d",&a,&b);

    arithematic(a,b,&sum,&diff,&product,&quotient);

    printf("Sum = %d\n",sum);
    printf("Difference = %d\n",diff);
    printf("Product = %d\n",product);

    if(b!=0)
        printf("Quotient = %d\n",quotient);
    else
        printf("Quotient = 0\n");

        if(b == 0)
        printf("Division by zero is not allowed.\n");
    else
        printf("Division by zero is allowed.\n");
    return 0;
}