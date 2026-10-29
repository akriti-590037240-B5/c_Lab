#include<stdio.h>

 void deposit(int amount);
 void withdraw(int amount);
 void displayBalance();

int main()
{
    displayBalance();

    deposit(700);

    displayBalance();

    withdraw(300);

    displayBalance();

    withdraw(2000);

    displayBalance();

    return 0;
}