#include <stdio.h>

struct Device {
    unsigned int power : 1;
    unsigned int mode : 2;
    unsigned int error : 1;
    unsigned int battery : 4;
};

int main() {
    struct Device d;

    int p, m, e, b;

    printf("Enter power (0 or 1): ");
    scanf("%d", &p);

    printf("Enter mode (0-3): ");
    scanf("%d", &m);

    printf("Enter error (0 or 1): ");
    scanf("%d", &e);

    printf("Enter battery (0-15): ");
    scanf("%d", &b);

    if (p < 0 || p > 1 || m < 0 || m > 3 ||
        e < 0 || e > 1 || b < 0 || b > 15) {
        printf("Invalid input");
        return 0;
    }

    d.power = p;
    d.mode = m;
    d.error = e;
    d.battery = b;

    printf("\nDevice Status\n");
    printf("Power: %u\n", d.power);
    printf("Mode: %u\n", d.mode);
    printf("Error: %u\n", d.error);
    printf("Battery: %u\n", d.battery);

    return 0;
}