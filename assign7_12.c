#include<stdio.h>

int main()
{
    int a[10][10],m,n,i,j,sum;

    printf("Enter number of rows and columns");
    scanf("%d %d",&m,&n);

    printf("Enter the elements of matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    printf("\nRow wise sums:\n");
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum+=a[i][j];
        }
        printf("Row %d= %d\n",i+1,sum);
    }

    printf("\nColumn wise sums:\n");
    for(j=0;j<n;j++)
    {
        sum=0;
        for(i=0;i<m;i++)
        {
            sum+=a[i][j];
        }
        printf("Column %d= %d\n",j+1,sum);
    }

    return 0;
}