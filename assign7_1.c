#include<stdio.h>

int main()
{
    int n,i,sum=0;
    float avg;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);            
        sum=sum+arr[i];
    }

    printf("Array elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    avg=(float)sum/n;
    printf("\nSum: %d",sum);
    printf("\nAverage: %.2f",avg);
    return 0;
}