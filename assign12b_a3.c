#include<stdio.h>

enum Type
{
    INT_VALUE,
    FLOAT_VALUE,
    CHAR_VALUE
};

union Data
{
    int i;
    float f;
    char c;
};

struct TaggedUnion
{
    enum Type tag;
    union Data data;
};

void printValue(struct TaggedUnion v)
{
    switch(v.tag)
    {
        case INT_VALUE:
        printf("Integer : %d",v.data.i);
        break;

        case FLOAT_VALUE:
        printf("Float: %.2f",v.data.f);
        break;

        case CHAR_VALUE:
        printf("Character : %c", v.data.c);
        break;

    }
    
}

int main()
{
    struct TaggedUnion v;

    v.tag = INT_VALUE;
    v.data.i = 25;
    printValue(v);

    return 0;
}