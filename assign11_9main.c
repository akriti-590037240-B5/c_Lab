#include<stdio.h>

extern int balance;

int main(void)
{
    printf("Initial balance = %d\n",balance);

    balance = balance + 500;

    printf("Updated balance = %d\n",balance);

    return 0;
}