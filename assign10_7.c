#include<stdio.h>

int checksymmetric(int a[10][10],int n,int i,int j)
{
    if(i == n)
        return 1;
    if(j == n)
        return checksymmetric(a,n,i+1,0);
    if(a[i][j] != a[j][i])
        return 0;
    return checksymmetric(a,n,i,j+1);
}

int main()
{
    int a[10][10],n,i,j;
    printf("Enter the size of the matrix: ");
    scanf("%d",&n);
    if (n<1 || n>10)
    {
        printf("Invalid size. Please enter a size between 1 and 10.\n");
        return 0;
    }
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(checksymmetric(a,n,0,0))
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");
    return 0;
}