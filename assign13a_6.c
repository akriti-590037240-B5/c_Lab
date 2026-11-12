#include <stdio.h>

void count_elements(int rows, int cols,
                    int matrix[rows][cols],
                    int *positive, int *negative,
                    int *zero, int *even)
{
    *positive = 0;
    *negative = 0;
    *zero = 0;
    *even = 0;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            int x = *(*(matrix + i) + j);

            if(x > 0)
                (*positive)++;

            else if(x < 0)
                (*negative)++;

            else
                (*zero)++;

            if(x % 2 == 0)
                (*even)++;
        }
    }
}

int main()
{
    int rows, cols;
    int positive, negative, zero, even;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter matrix elements:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
    }

    count_elements(rows, cols, matrix,
                   &positive, &negative,
                   &zero, &even);

    printf("\nMatrix:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
            printf("%d ", *(*(matrix + i) + j));

        printf("\n");
    }

    printf("\nPositive elements = %d", positive);
    printf("\nNegative elements = %d", negative);
    printf("\nZero elements = %d", zero);
    printf("\nEven elements = %d\n", even);

    return 0;
}