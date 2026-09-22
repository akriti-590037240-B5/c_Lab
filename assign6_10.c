#include<stdio.h>

int main()
{
    int n,i,j,c,space;

    printf("Enter number of rows");
    scanf("%d",&n);

        for(i=0;i<n;i++)
        {
        for(space = 1;space < n-i;space++)
        {
            printf(" ");
        }
        c = 1;

        for(j = 0;j<=i;j++)
        {
            printf("%d ",c);
            c=c*(i-j) / (j+1);
        }
        printf("\n");
        }
    return 0;
}
