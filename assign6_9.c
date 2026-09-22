#include<stdio.h>
 int main()
 {
 int c,n,original,d,r,sum1,count,d1,isprime,power,i,sum2;

 do
 {
    printf("\n--- NUMBER OPERATIONS ---\n");
    printf("1. Check Palindrome\n");
    printf("2. Check Armstrong Number\n");
    printf("3. Check Prime Number\n");
    printf("4. Find sum of digits\n");
    printf("5. Count the number of digits\n");
    printf("6. Exit\n");

    printf("Enter your choice: ");
    scanf("%d",&c);

    if(c>=1 && c<=5)
    {
        printf("Enter a positive integer");
        scanf("%d",&n);
    }
    switch(c)
    {
        case 1:
        if(n<0)
        {
        printf("Enter a positive integer.\n");
        break;
        }

        original = n;
        r=0;

        while(n != 0)
        {
            d=n%10;
            r=r*10+d;
            n=n/10;
        }

        if(original == r)
        printf("%d is a palindrone.\n",original);
    else
    printf("%d is not palindrome.\n",original);
    break;

case 2:
if(n<0)
{
    printf("Enter a positive integer.\n");
    break;
}

original = n;
count = 0;

do
{
    count++;
    n=n/10;
}
while(n!=0);

n = original;
sum1=0;

do
{
    d=n%10;
    power=1;
    for(i=1;i<=count;i++)
    {
        power=power*d;
    }
    sum1 = sum1+power;
    n=n/10;
}
while(n!=0);

if(sum1==original)
printf("%d is armstrong number.\n",original);
else
printf("%d is not armstrong number.\n",original);
break;

case 3:
if(n<0)
{
    printf("%d is not a prime number.\n",n);
    break;
}
isprime = 1;

isprime=1;

for(d1=2;d1<=n/2;d1++)
{
    if(n % d1 == 0)
    {
        isprime = 0;
        break;

    }
}
if(isprime == 1)
printf("%d is a prime number.\n",n);
else
printf("%d is not a prime number.\n",n  );
break;

case 4:
if(n<0)
n=-n;
sum2=0;

while(n!=0)
{
    d=n%10;
    sum2 = sum2+d;
    n=n/10;
}
printf("Sum of digits is %d.\n",sum2);
break;

case 5:
if(n<0)
n=-n;
count=0;

do
{
    count++;
    n=n/10;}
    while(n!=0);

    printf("Number of digits is = %d.\n",count);
    break;  

    case 6:
    printf("Exiting the program.\n");
    break;

    default:
    printf("Invalid choice. Please try again.\n");
}
 }
  while(c!=6);

  return 0;
}