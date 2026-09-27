#include<stdio.h>

int main()
{
    int n1,n2,i;

    printf("Enter size of first array");
    scanf("%d",&n1);

    int arr[n1];

    printf("Enter elements:\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter size of second array");
    scanf("%d",&n2);

    int b[n2];
    int c[n1+n1];

    printf("Enter elements");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0;i<n1;i++)
    {
        c[i]=arr[i];
    }

    for(i=0;i<n2;i++)
    {
        c[n1+i]=b[i];
    }
    printf("Merged array:\n");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}