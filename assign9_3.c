#include<stdio.h>

int sumofdigits(int n)
{
    int sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int countdigits(int n)
{
    int count=0;
    while(n>0)
    {
        count++;
        n/=10;
    }
    return count;
}

int reverse(int n)
{
    int rev=0;
    while(n>0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}
void ispalindrome(int n)
{
    if(n==reverse(n))
    printf("%d is a palindrome\n",n);
    else
    printf("%d is not a palindrome\n",n);
}

int main()
{
    int n;

    printf("Enter an integer:");
    scanf("%d",&n);

    printf("Sum of digits of %d is %d\n",n,sumofdigits(n));
    printf("Count of digits of %d is %d\n",n,countdigits(n));
    printf("Reverse of %d is %d\n",n,reverse(n));
    ispalindrome(n);

    return 0;
}