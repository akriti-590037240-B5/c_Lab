#include<stdio.h>

int main()
{
    int i,j,upper,lower,count=0,isprime;

    printf("Enter the lower limit: ");
    scanf("%d",&lower);

    printf("Enter the upper limit: ");
    scanf("%d",&upper);

    printf("Prime numbers are:");

    for(i = lower;i<=upper;i++)
    {
        if(i<2)
        {
            continue;
        }
        isprime = 1;

        for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            isprime = 0;
            break;
        }
    }
    if(isprime)
    {
        printf("%d ",i);
        count++;
    }   
}
    printf("\nTotal number of prime numbers = %d\n", count);

    return 0;
}