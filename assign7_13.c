#include<stdio.h>

int main()
{
    int a[10][10],t[10][10],n,i,j,s=1;

    printf("Enter the order of square matrix:");
    scanf("%d",&n);

    printf("Enter the elements of matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
    }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            t[j][i]=a[i][j];
        }
    }

    printf("\nTranspose of matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",t[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            {
             s=0;
            }
        }
    }


    if(s==1)
    printf("\nThe matrix is symmetric\n");
else
printf("\n The matrix is not symmetric\n");

return 0;
}