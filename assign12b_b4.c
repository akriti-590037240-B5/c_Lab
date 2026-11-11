#include <stdio.h>

struct Ordinary {
    unsigned int read;
    unsigned int write;
    unsigned int execute;
    unsigned int admin;
};

struct BitField {
    unsigned int read : 1;
    unsigned int write : 1;
    unsigned int execute : 1;
    unsigned int admin : 1;
};

int main() {

    printf("Size of Ordinary Structure: %zu bytes\n",
           sizeof(struct Ordinary));

    printf("Size of Bit-field Structure: %zu bytes\n",
           sizeof(struct BitField));

    return 0;
}