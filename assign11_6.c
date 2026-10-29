#include<stdio.h>

static int number = 50;

void display(void)
{
    printf("Static global number = %d\n",number);
}

int main(void)
{
    display();
    number = 100;
    display();

    return 0;
}