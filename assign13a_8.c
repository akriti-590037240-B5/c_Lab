#include <stdio.h>

void update_pointer(int **p, int *new_address)
{
    *p = new_address;
}

int main()
{
    int a = 10;
    int b = 20;

    int *p = &a;

    printf("Before updating:\n");
    printf("Value = %d\n", *p);

    update_pointer(&p, &b);

    printf("\nAfter updating:\n");
    printf("Value = %d\n", *p);

    return 0;
}