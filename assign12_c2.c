#include<stdio.h>

union Number
{
    int i;
   float f;
};

int main()
{
    union Number num[3];

    printf("Enter three integers:\n");
    for(int i=0; i<3; i++)
    {
        scanf("%d", &num[i].i);
    }

    num[1].f = 3.14;

    printf("\n\nAfter overwriting the second integer with a float:\n");
    printf("First integer: %d\n", num[0].i);
    printf("Second integer (interpreted as float): %f\n", num[1].f);
    printf("Third integer: %d\n", num[2].i);

    return 0;
}