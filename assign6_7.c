#include<stdio.h>

int main()
{
    int n,r,b=0,p=1;
    printf("Enter a positive decimal number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%2;
        b=b+r*p;
        p=p*10;
        n=n/2;
    }
    printf("Binary equivalent: %d",b);
    return 0;
}