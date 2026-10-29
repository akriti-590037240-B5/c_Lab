#include<stdio.h>

int number=100;

int main(void)
{
    printf("global variable number = %d\n",number);
    {
     int number=200;
     printf("local variable number = %d\n",number);
    }
    printf("global variable number = %d\n",number);
   return 0;
}