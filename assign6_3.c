#include<stdio.h>

int main()
{
    int n,r=0,d,o;
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    o=n;

    while(n != 0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    if(o==r)
    {
        printf("%d is a palindrome",o);
    }
    else
    {
        printf("%d is not a palindrome",o);
    
    }
    return 0;
}