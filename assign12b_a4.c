#include <stdio.h>

enum MenuChoice {
    ADD = 1, SUBTRACT, MULTIPLY, DIVIDE, EXIT
};

int main() {
    enum MenuChoice choice;
    float a, b;

    do {
        printf("\n1. ADD");
        printf("\n2. SUBTRACT");
        printf("\n3. MULTIPLY");
        printf("\n4. DIVIDE");
        printf("\n5. EXIT");

        printf("\nEnter your choice: ");
        scanf("%d", (int *)&choice);

        if (choice == EXIT)
            break;

        if (choice < ADD || choice > DIVIDE) {
            printf("Invalid choice");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        switch (choice) 
        {
            case ADD:
                printf("Result = %.2f", a + b);
                break;

            case SUBTRACT:
                printf("Result = %.2f", a - b);
                break;

            case MULTIPLY:
                printf("Result = %.2f", a * b);
                break;

            case DIVIDE:
                if (b == 0)
                    printf("Division by zero not allowed");
                else
                    printf("Result = %.2f", a / b);
                break;

            case EXIT:
                break;
        }

    } while (choice != EXIT);

    printf("\nCalculator closed");

    return 0;
}