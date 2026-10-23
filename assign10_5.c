#include<stdio.h>

int binarysearch(int arr[],int low,int high,int key)
{
    if(low>high)
        return -1;
    int mid = low + (high-low)/2;
    if(arr[mid]==key)
        return mid;
    if(arr[mid]>key)
        return binarysearch(arr,low,mid-1,key);
    return binarysearch(arr,mid+1,high,key);
}
int main()
{
    int n, key;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array in sorted order: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d",&key);
    int result = binarysearch(arr,0,n-1,key);
    if(result==-1)
        printf("Element not found.\n");
    else
        printf("Element found at index %d.\n",result);
    return 0;
}