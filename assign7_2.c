#include<stdio.h>

int main()
{
    int n,i,key,count=0;

    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);     

    int arr[n];
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("Element found at index %d\n",i);
            count++;
        }
    }
    if(count==0)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found %d times",count);
    }
    return 0;
}