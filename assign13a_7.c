#include <stdio.h>

int main()
{
    int x = 10;

    int *p = &x;

    int **q = &p;

    printf("Value of x = %d\n", x);

    printf("Value using *p = %d\n", *p);

    printf("Value using **q = %d\n", **q);

    printf("\nAddress of x = %p\n", (void*)&x);

    printf("Address stored in p = %p\n", (void*)p);

    printf("Address of p = %p\n", (void*)&p);

    printf("Address stored in q = %p\n", (void*)q);

    return 0;
}