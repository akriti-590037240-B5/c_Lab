#include<stdio.h>

void cyclicSwap(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Before cyclic swap: a = %d, b = %d, c = %d\n", a, b, c);
    cyclicSwap(&a, &b, &c);
    printf("After cyclic swap: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}