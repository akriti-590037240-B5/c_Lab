#include <stdio.h>

int main()
{
    int x = 25;

    int *p = &x;

    int **q = &p;

    printf("Initial value of x = %d\n", x);
    printf("Value of *p = %d\n", *p);
    printf("Value of **q = %d\n", **q);

    *p = 40;

    printf("\nAfter *p = 40:\n");
    printf("Value of x = %d\n", x);

    **q = 75;

    printf("\nAfter **q = 75:\n");
    printf("Value of x = %d\n", x);

    return 0;
}