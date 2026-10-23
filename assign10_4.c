#include<stdio.h>
#include<limits.h>

void findtwolargest(int arr[],int n,int index,int *first,int *second)
{
    if(index==n)
        return;
    if(arr[index]>*first)
    {
        *second=*first;
        *first=arr[index];
    }
    else if(arr[index]>*second && arr[index]!=*first)
    {
        *second=arr[index];
    }
    findtwolargest(arr,n,index+1,first,second);
}

int  main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);    
    }

    int first=INT_MIN,second=INT_MIN;
    findtwolargest(arr,n,0,&first,&second);
    if(second==INT_MIN)
        printf("There is no second largest element in the array.\n");
    else
        printf("The largest element is %d and the second largest element is %d.\n",first,second);
    return 0;
}