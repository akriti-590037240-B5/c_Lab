#include<stdio.h>
#include<limits.h>
int columnsum(int a[10][10],int rows,int coln,int i)
{
    if(i == rows)
    return 0;

    return a[i][coln]+ columnsum(a,rows,coln,i+1);
}

int findmincoln(int a[10][10],int rows,int cols,int coln,int mincoln,int minsum)
{
    if(coln == cols)
    return mincoln;
int sum = columnsum(a,rows,coln,0);

if(sum < minsum)
{
    minsum = sum;
    mincoln = coln;
}
return findmincoln(a,rows,cols,coln+1,mincoln,minsum);

}
int main()
{
    int a[10][10],rows,coln,i,j;
    int firstsum,mincoln;

    printf("Enter rows and columns");
    scanf("%d %d",&rows,&coln);
    
    if(rows < 1 || rows > 10 || coln < 1 || coln > 10)
    {
        printf("Invalid matrix size");
        return 0;
    }
    printf("Enter matrix elements");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<coln;j++)
        {
            scanf("%d",&a[i][j]);

            firstsum = columnsum(a,rows,0,0);
            mincoln = findmincoln(a,rows,coln,0,0,firstsum);
        }
    }
    printf("Column with minimum sum is %d.\n",mincoln+1);
    printf("Sum of column %d is %d.\n",mincoln+1,columnsum(a,rows,mincoln,0));
    return 0;
}
