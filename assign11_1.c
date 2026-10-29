#include<stdio.h>

int main(void)
{
    auto int x=5;
    printf("Outside the block, x=%d\n",x);
    {
    printf("Entering the block.\n");
    {
        auto int x=10;
        printf("Inside the block, x=%d\n",x);
    }
    printf("Exiting the block.\n");
}
    return 0;
}