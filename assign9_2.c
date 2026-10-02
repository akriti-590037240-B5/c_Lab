#include<stdio.h>

int evenOdd(int n)
{
return n%2 ==0;
}

int positiveNegative(int n)
{
    if(n>0)
    return 1;
else if(n<0)
return -1;
return 0;
}

int prime(int n)
{
    int i;

    if(n<2)
    return 0;

    for(i=2;i <= n/2;i++)
    {
        if(n%i == 0)
        return 0;
    }

    return 1;
}
int perfect(int n)
{
    int i,sum=0;

    if(n <= 0)
    return 0;

    for(i=1;i<n;i++)
    {
        if(n%i == 0)
        sum += i;
    }
    return sum == n;
}

int main()
{
    int n;

    printf("Enter an integer:");
    scanf("%d",&n);

    if(evenOdd(n))
    printf("%d is even\n",n);
else
printf("%d is odd\n",n);    

    if(positiveNegative(n) == 1)
    printf("%d is positive\n",n);
else if(positiveNegative(n) == -1)
printf("%d is negative\n",n);
else
printf("%d is zero\n",n);    

    if(prime(n))
    printf("%d is prime\n",n);
else
printf("%d is not prime\n",n);      

    if(perfect(n))
    printf("%d is perfect\n",n);
else
printf("%d is not perfect\n",n);

return 0;
}