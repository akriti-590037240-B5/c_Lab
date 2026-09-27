#include<stdio.h>

int main()
{
    int a[10][10],n;
    int i,j;
    int mainSum = 0,secSum=0;
    int u=1,l=1;

    printf("Enter the order of square matrix:");
    scanf("%d",&n);

    printf("Enter the elements of the matrix:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        mainSum = mainSum + a[i][j];
        secSum = secSum + a[i][n-1-i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>j && a[i][j] != 0)
            u=0;

            if(i<j && a[i][j] != 0)
            l=0;
        }

    }

    printf("\nMain diagonal sum = %d",mainSum);
    printf("\nSecondary diagonal sum = %d",secSum);

    if(u && l)
    printf("\nThe matrix is a diagonal matrix");
    else if(u==0)
    printf("\nThe matrix is an upper triangular matrix");
    else if(l==0)
    printf("\nThe matrix is an lower triangular matrix");
else
printf("\nThe matrix is neither");

return 0;

}