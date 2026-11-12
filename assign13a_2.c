#include<stdio.h>

int main()
{
    int a=20;
    int *p;
    p=&a;

    printf("Original value of a=%d\n",a);
    *p = *p+10;
    printf("New value of a=%d\n",a);

    return 0;
}