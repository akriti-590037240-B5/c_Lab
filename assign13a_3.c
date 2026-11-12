#include<stdio.h>

int main()
{
    int a[5] = {10,20,30,40,50};
    int *p = a;

    printf("Initial pointer value = %p\n",(void*)p);

    p++;
    printf("Pointer value after increment = %p\n",(void*)p);

    p--;
    printf("Pointer value after decrement = %p\n",(void*)p);

    p =p+2;
    printf("Pointer value after adding 2 = %p\n",(void*)p);

    p =p-1;
    printf("Pointer value after subtracting 1 = %p\n",(void*)p);

    return 0;
}