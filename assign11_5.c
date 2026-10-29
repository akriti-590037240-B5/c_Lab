#include<stdio.h>

int generateID(void)
{
    static int id = 1000;
    return ++id;
}

int main(void)
{
    printf("ID = %d\n", generateID());
    printf("ID = %d\n", generateID());
    printf("ID = %d\n", generateID());
    printf("ID = %d\n", generateID());

    return 0;
}


