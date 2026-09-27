#include<stdio.h>

int main()
{
    int rows,colns,i,j;

    printf("Enter number of rows");
    scanf("%d",&rows);

    printf("Enter number of columns");
    scanf("%d",&colns);

    int a[rows][colns];

    printf("Enter elements\n");
    for(i=0;i<rows;i++)
    {
    for(j=0;j<colns;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }

    printf("Mtrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<colns;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}